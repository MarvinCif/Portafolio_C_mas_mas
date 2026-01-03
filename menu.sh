#!/usr/bin/env bash
set -euo pipefail

# Many exercises include headers from ./include
INCLUDE_FLAGS=("-Iinclude")

# Find .cpp files recursively and keep only those containing an int main(...)
# Ignore build output and git internals.
mapfile -t EXERCISES < <(
  find . -type f -name "*.cpp" \
    ! -path "./build/*" \
    ! -path "./.git/*" \
  | sort \
  | while IFS= read -r file; do
      if grep -Eq '^[[:space:]]*int[[:space:]]+main[[:space:]]*\(' "$file"; then
        echo "$file"
      fi
    done
)

if ((${#EXERCISES[@]} == 0)); then
  echo "No se encontraron ejercicios ejecutables (archivos .cpp con int main())."
  exit 1
fi

extract_title() {
  local file="$1"

  # Prefer a comment like: "Enunciado: ..." if present
  local title
  title="$(grep -m1 -E 'Enunciado:' "$file" | sed -E 's/.*Enunciado:[[:space:]]*//')"
  if [[ -z "${title// }" ]]; then
    title="$(basename "$file")"
  fi
  echo "$title"
}

compile_and_run() {
  local main_cpp="$1"
  local dir
  dir="$(dirname "$main_cpp")"

  # Compile this main + any other .cpp in the same directory that do NOT define main
  # (avoids multiple-main link errors while still compiling local dependencies).
  local -a deps=()
  while IFS= read -r dep; do
    [[ "$dep" == "$main_cpp" ]] && continue
    if ! grep -Eq '^[[:space:]]*int[[:space:]]+main[[:space:]]*\(' "$dep"; then
      deps+=("$dep")
    fi
  done < <(find "$dir" -maxdepth 1 -type f -name "*.cpp" | sort)

  rm -f ./run_app

  echo
  echo "Compilando: $main_cpp"
  if ((${#deps[@]} > 0)); then
    echo "Incluyendo dependencias (.cpp sin main) del mismo directorio:"
    printf '  - %s\n' "${deps[@]}"
  fi
  echo

  g++ -std=c++17 -Wall -Wextra -pedantic "${INCLUDE_FLAGS[@]}" \
    "$main_cpp" "${deps[@]}" \
    -o run_app

  echo "Ejecutando ./run_app ..."
  echo "--------------------------------"
  ./run_app
  echo "--------------------------------"
  echo
  read -r -p "Presione Enter para volver al menu..." _
}

while true; do
  clear || true
  echo "=============================="
  echo " Portafolio-C++ (Codespaces)"
  echo "=============================="
  echo

  for i in "${!EXERCISES[@]}"; do
    idx=$((i + 1))
    file="${EXERCISES[$i]}"
    title="$(extract_title "$file")"
    printf "%2d) %s\n    %s\n" "$idx" "$title" "$file"
  done

  echo
  echo " 0) Clean & Exit (rm -f ./run_app)"
  echo
  read -r -p "Seleccione una opcion: " choice

  if [[ "$choice" == "0" ]]; then
    rm -f ./run_app
    echo "Limpieza completa. Saliendo..."
    exit 0
  fi

  if [[ "$choice" =~ ^[0-9]+$ ]] && (( choice >= 1 && choice <= ${#EXERCISES[@]} )); then
    compile_and_run "${EXERCISES[$((choice - 1))]}"
  else
    echo "Opcion invalida."
    read -r -p "Presione Enter para continuar..." _
  fi
done
