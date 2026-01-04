# 🚀 Portafolio C++: De Principiante a Arquitectura

[![Open in GitHub Codespaces](https://github.com/codespaces/badge.svg)](https://codespaces.new/)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++ Standard](https://img.shields.io/badge/C%2B%2B-11%2F14%2F17%2F20-blue.svg)](https://isocpp.org/)

> **¿Quieres probarlo todo ya?** > He creado un menú interactivo en la terminal. Abre Codespaces arriba y corre:
> ```bash
> ./menu.sh
> ```

---

## 🗺️ Mapa de Ruta (Navegación Rápida)
1. [Nivel 1: Fundamentos](#-nivel-1-fundamentos)
2. [Nivel 2: Control de Flujo](#-nivel-2-control-de-flujo-y-arreglos)
3. [Nivel 3: Punteros y Memoria](#-nivel-3-modularidad-y-memoria)
4. [Nivel 4: POO y STL](#-nivel-4-programación-orientada-a-objetos-y-stl)
5. [Nivel 5: C++ Moderno](#-nivel-5-c-moderno-y-avanzado)
6. [🧠 Zona Hardcore: Arquitectura y Bit Hacking](#-ejercicios-arquitectura)

---

<details open>
<summary><h2>🟢 Nivel 1: Fundamentos</h2></summary>
<br>

> **Enfoque:** Variables, Entradas/Salidas, Condicionales y Lógica básica.

| Estado | Ejercicio | Conceptos Clave | Acción |
| :---: | :--- | :--- | :---: |
| ✅ | **Hola Mundo** | `cout`, `iostream` | [📂 Ver Código](./nivel1/hola_mundo.cpp) |
| ✅ | **Suma de dos números** | `cin`, variables | [▶️ Run Online](https://godbolt.org/) |
| ✅ | **Intercambio (Swap)** | Variables temporales | [📂 Ver Código](./nivel1/swap.cpp) |
| ✅ | **Intercambio XOR** | Bitwise simple | [📂 Ver Código](./nivel1/xor_swap.cpp) |
| ✅ | **Ecuación Cuadrática** | Math, $ax^2 + bx + c = 0$ | [📂 Ver Código](./nivel1/cuadratica.cpp) |
| 🚧 | **Validación de edad** | Condicionales | *En progreso* |

</details>

<details>
<summary><h2>🟡 Nivel 2: Control de Flujo y Arreglos</h2></summary>
<br>

> **Enfoque:** Bucles (`for`, `while`), Arrays estáticos y manipulación básica de Strings.

* [ ] Imprimir 1 al 100
* [ ] Factorial ($n!$)
* [ ] Serie Fibonacci
* [ ] Búsqueda Lineal en Array
* [ ] **Palíndromo:** Verificar si una palabra se lee igual al revés.

</details>

<details>
<summary><h2>🔴 Nivel 3: Punteros y Memoria (The Real C++)</h2></summary>
<br>

> **Enfoque:** Gestión manual de memoria, aritmética de punteros y recursividad.

* [ ] Punteros Básicos
* [ ] **Swap con Punteros:** `void swap(int *a, int *b)`
* [ ] Memoria Dinámica (`new`/`delete`)
* [ ] Listas Enlazadas Simples

</details>

---

<details>
<summary><h2>🧠 Ejercicios: Arquitectura y Bitwise (Advanced)</h2></summary>
<br>

Estos ejercicios evitan el uso de `if`, bucles o multiplicaciones costosas, simulando restricciones de hardware antiguo o sistemas embebidos.

| Reto | Descripción | Restricción | Complejidad |
| :--- | :--- | :--- | :--- |
| **Valor Absoluto** | Calcular `abs(x)` | 🚫 Sin `if` ni `ternario` | $O(1)$ |
| **Potencia de Dos** | ¿Es $n$ potencia de 2? | 🚫 Sin bucles | $O(1)$ |
| **Lowercaser** | 'A' $\to$ 'a' | 🚫 Sin `if` (range check) | $O(1)$ |
| **Popcount** | Contar bits en '1' | Algoritmo Kernighan | $O(\log k)$ bits |

> **💡 Nota Técnica:**
> Muchos de estos ejercicios explotan la representación **Complemento a 2**. Por ejemplo, para el valor absoluto, usamos el desplazamiento aritmético `>>` para generar máscaras de bits.

</details>
