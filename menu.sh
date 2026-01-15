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

pretty_group_name() {
  local group="$1"
  if [[ "$group" == "Arquitectura" ]]; then
    echo "Arquitectura"
    return
  fi

  # Turn: Nivel1_Foo_Bar -> Nivel 1 - Foo Bar
  local out="$group"
  if [[ "$out" =~ ^Nivel([0-9]+)_(.*)$ ]]; then
    out="Nivel ${BASH_REMATCH[1]} - ${BASH_REMATCH[2]}"
  fi
  out="${out//_/ }"
  echo "$out"
}

extract_group() {
  # Inputs are like: ./src/Nivel1_.../X.cpp or ./src/Arquitectura/.../X.cpp
  local file="$1"

  if [[ "$file" == ./src/Arquitectura/* ]]; then
    echo "Arquitectura"
    return
  fi

  # Group by the first directory under ./src
  local rest="${file#./src/}"
  echo "${rest%%/*}"
}

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
  echo "========================================="
  echo " Portafolio-C++ (menu por niveles)"
  echo "========================================="
  echo

  # Build groups
  declare -A GROUP_FILES
  declare -a GROUP_KEYS
  for file in "${EXERCISES[@]}"; do
    group="$(extract_group "$file")"
    if [[ -z "${GROUP_FILES[$group]+x}" ]]; then
      GROUP_KEYS+=("$group")
      GROUP_FILES["$group"]="$file"
    else
      GROUP_FILES["$group"]+=$'\n'"$file"
    fi
  done

  # Order: Nivel1..Nivel5 first, then Arquitectura, then anything else.
  declare -a ORDERED_KEYS
  for k in "Nivel1" "Nivel2" "Nivel3" "Nivel4" "Nivel5"; do
    for g in "${GROUP_KEYS[@]}"; do
      if [[ "$g" == ${k}_* ]]; then
        ORDERED_KEYS+=("$g")
      fi
    done
  done
  for g in "${GROUP_KEYS[@]}"; do
    if [[ "$g" == "Arquitectura" ]]; then
      ORDERED_KEYS+=("$g")
    fi
  done
  for g in "${GROUP_KEYS[@]}"; do
    if [[ "$g" != "Arquitectura" && ! "$g" =~ ^Nivel[1-5]_ ]]; then
      ORDERED_KEYS+=("$g")
    fi
  done

  echo "Seleccione un nivel:"
  echo
  for i in "${!ORDERED_KEYS[@]}"; do
    idx=$((i + 1))
    g="${ORDERED_KEYS[$i]}"
    # count lines
    count=$(printf '%s\n' "${GROUP_FILES[$g]}" | sed '/^$/d' | wc -l | tr -d ' ')
    printf "%2d) %s (%s ejercicios)\n" "$idx" "$(pretty_group_name "$g")" "$count"
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

  if ! [[ "$choice" =~ ^[0-9]+$ ]] || (( choice < 1 || choice > ${#ORDERED_KEYS[@]} )); then
    echo "Opcion invalida."
    read -r -p "Presione Enter para continuar..." _
    continue
  fi

  selected_group="${ORDERED_KEYS[$((choice - 1))]}"
  mapfile -t LEVEL_EXERCISES < <(printf '%s\n' "${GROUP_FILES[$selected_group]}" | sed '/^$/d')

  while true; do
    clear || true
    echo "========================================="
    echo " $(pretty_group_name "$selected_group")"
    echo "========================================="
    echo

    for i in "${!LEVEL_EXERCISES[@]}"; do
      idx=$((i + 1))
      file="${LEVEL_EXERCISES[$i]}"
      title="$(extract_title "$file")"
      # show a shorter location
      short="${file#./src/}"
      printf "%2d) %s\n    %s\n" "$idx" "$title" "$short"
    done

    echo
    echo " 0) Volver"
    echo
    read -r -p "Seleccione un ejercicio: " ex_choice

    if [[ "$ex_choice" == "0" ]]; then
      break
    fi

    if [[ "$ex_choice" =~ ^[0-9]+$ ]] && (( ex_choice >= 1 && ex_choice <= ${#LEVEL_EXERCISES[@]} )); then
      compile_and_run "${LEVEL_EXERCISES[$((ex_choice - 1))]}"
    else
      echo "Opcion invalida."
      read -r -p "Presione Enter para continuar..." _
    fi
  done
done
