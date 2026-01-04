[![Open in GitHub Codespaces](https://github.com/codespaces/badge.svg)](https://codespaces.new/)

## `< Tech Stack />`

[![C++](https://img.shields.io/badge/C%2B%2B-ISO%20Standard-blue?style=flat&logo=c%2B%2B)](https://isocpp.org/)
[![CMake](https://img.shields.io/badge/CMake-Build-informational?style=flat&logo=cmake)](https://cmake.org/)

# Portafolio-C++

## `Ejecutar ejercicios en Codespaces (menu interactivo)`

En la terminal:

```sh
./menu.sh
```

Nota: `menu.sh` se proporciona con permisos ejecutables por defecto en Codespaces (y `.devcontainer` contiene un `postCreateCommand` como respaldo). Si por alguna razón no puede ejecutarlo, use `bash menu.sh`.

## `Propósito`
Portafolio-C++ es un repositorio público que recopila ejercicios en C++ organizados por niveles de aprendizaje. El objetivo es mostrar implementaciones pedagógicas y autocontenidas de problemas clásicos y modernos a medida que se avanza en el dominio del lenguaje.

```mermaid
%%{init: {'theme': 'base', 'themeVariables': {
  'fontFamily': '"Fira Code", "DejaVu Sans Mono", monospace',
  'fontSize': '12px',
  'nodePadding': '8',
  'primaryColor': '#ff6f61',
  'edgeLabelBackground': '#0b1a2b',
  'edgeLabelColor': '#f1faee',
  'clusterBkg': '#1d3557',
  'tertiaryColor': '#2a9d8f'
}}}%%
graph TD;
  A[01. Fundamentos] --> B[02. Control de Flujo];
  B --> C{03. Memoria & Punteros};
  C -->|Standard Path| D[04. POO & STL];
  C -->|Low-Level Path| E[05. Arquitectura & Bit-Hacking];
  D --> F[06. C++ Moderno];
  E --> F;
  style A fill:#ffb347,stroke:#cc5500,stroke-width:2px,color:#0b1a1e
  style B fill:#90be6d,stroke:#3c6e47,stroke-width:2px,color:#0b1a0f
  style C fill:#f94144,stroke:#7f0000,stroke-width:2px,color:#fceee9
  style D fill:#577590,stroke:#1d3557,stroke-width:2px,color:#f1f1f1
  style E fill:#00a8e8,stroke:#004e66,stroke-width:2px,color:#e9f0f7
  style F fill:#8ecae6,stroke:#1d3557,stroke-width:2px,color:#05070a
  linkStyle 0 stroke:#f08a5d,stroke-width:2px;
  linkStyle 1 stroke:#f08a5d,stroke-width:2px;
  linkStyle 2 stroke:#393e46,stroke-width:2px;
  linkStyle 3 stroke:#393e46,stroke-width:2px;
  linkStyle 4 stroke:#3a86ff,stroke-width:2px;
  linkStyle 5 stroke:#0b1a2b,stroke-width:2px;
```

## `Ejercicios`

Leyenda


☑ Completado

◻ Pendiente

<details>
  <summary><h3><strong><code>01 :: Fundamentos</code></strong></h3></summary>

| Status | Exercise | Topic | Source | Live Demo |
|---|---|---|---|---|
| ☑ | Hola Mundo | `std::cout` | [View Code](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_01_HolaMundo.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ☑ | Suma de dos números | `std::cin`, operadores | [View Code](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_02_Suma.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ☑ | Tipos de datos | `sizeof` | [View Code](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_03_TiposDeDatos.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ☑ | Intercambio de variables | swap con temporal | [View Code](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_04_Intercambio_Temporal.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ☑ | Intercambio sin temporal | aritmética / XOR | [Aritmético](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_05_Intercambio_Aritmetico.cpp)<br/>[XOR](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_05_Intercambio_XOR.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ☑ | Par o Impar | `%`, condicionales | [View Code](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_06_ParImpar.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ☑ | Mayor de dos | comparación | [View Code](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_07_MayorDeDos.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ☑ | Mayor de tres | comparación | [View Code](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_08_MayorDeTres.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ☑ | Año bisiesto | lógica booleana | [View Code](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_09_AnioBisiesto.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ☑ | Calculadora simple | `switch` | [View Code](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_10_Calculadora.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ☑ | Área de un círculo | constantes, `double` | [View Code](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_11_AreaCirculo.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ☑ | Conversor de temperatura | fórmulas | [View Code](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_12_Conversor.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Verificar vocal | `char`, condicionales | [View Code](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_13_Verificar_vocal.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Número positivo/negativo/cero | rangos | [View Code](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_14_Numero_positivo_negativo_cero.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Días de la semana | `switch` / mapping | [View Code](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_15_Dias_de_la_semana.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Cálculo de descuento | condiciones | [View Code](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_16_Calculo_de_descuento.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Divisibilidad | operadores | [View Code](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_17_Divisibilidad.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Ecuación cuadrática | $ax^2 + bx + c$ | [View Code](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_18_Ecuacion_cuadratica.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | ASCII | casts, tabla ASCII | [View Code](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_19_ASCII.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Validación de edad | condicionales | [View Code](./src/Nivel1_Fundamentos_Variables_ES_Condicionales/N1_20_Validacion_de_edad.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |

</details>

<details>
  <summary><h3><strong><code>02 :: Control de Flujo</code></strong></h3></summary>

| Status | Exercise | Topic | Source | Live Demo |
|---|---|---|---|---|
| ◻ | Imprimir 1 al 100 | `for` | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_01_Imprimir_1_al_100.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Suma de naturales | acumulación | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_02_Suma_de_naturales.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Factorial | $n!$ | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_03_Factorial.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Tabla de multiplicar | loops | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_04_Tabla_de_multiplicar.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Serie Fibonacci | iteración | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_05_Serie_Fibonacci.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Invertir número | aritmética entera | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_06_Invertir_numero.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Suma de dígitos | `%` y `/` | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_07_Suma_de_digitos.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Números Primos | primalidad | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_08_Numeros_primos.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Primos en rango | loops | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_09_Primos_en_rango.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Patrón de asteriscos | patrones | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_10_Patron_de_asteriscos.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Pirámide | patrones | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_11_Piramide.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Máximo en Array | arrays | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_12_Maximo_en_array.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Mínimo en Array | arrays | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_13_Minimo_en_array.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Promedio | media aritmética | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_14_Promedio.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Buscar elemento | búsqueda lineal | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_15_Buscar_elemento.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Contar ocurrencias | conteo | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_16_Contar_ocurrencias.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Invertir Array | in-place | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_17_Invertir_array.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Palíndromo (String) | strings | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_18_Palindromo_string.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Contar vocales (String) | strings | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_19_Contar_vocales_string.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Concatenar cadenas | strings | [View Code](./src/Nivel2_ControlDeFlujo_Y_Arreglos_Bucles_Arrays_Strings_Basicos/N2_20_Concatenar_cadenas.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |

</details>

<details>
  <summary><h3><strong><code>03 :: Memoria & Punteros</code></strong></h3></summary>

| Status | Exercise | Topic | Source | Live Demo |
|---|---|---|---|---|
| ◻ | Función Potencia | $x^y$ sin `pow()` | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_01_Funcion_potencia.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Paso por Valor vs Referencia | `&` | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_02_Paso_por_valor_vs_referencia.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Punteros Básicos | punteros | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_03_Punteros_basicos.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Aritmética de Punteros | arrays + punteros | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_04_Aritmetica_de_punteros.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Swap con Punteros | `int*` | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_05_Swap_con_punteros.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Factorial Recursivo | recursión | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_06_Factorial_recursivo.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Fibonacci Recursivo | recursión | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_07_Fibonacci_recursivo.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Torres de Hanoi | recursión | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_08_Torres_de_Hanoi.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | MCD (Euclides) | recursión | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_09_MCD_Euclides.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Suma de Array Recursiva | recursión | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_10_Suma_de_array_recursiva.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Longitud de cadena | punteros | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_11_Longitud_de_cadena.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Copiar cadena | punteros | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_12_Copiar_cadena.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Memoria Dinámica (new/delete) | heap | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_13_Memoria_dinamica_new_delete.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Matriz Dinámica | `T**` | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_14_Matriz_dinamica.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Estructuras (struct) | `struct` | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_15_Estructuras_struct.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Array de Structs | colección | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_16_Array_de_structs.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Puntero a Struct | `->` | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_17_Puntero_a_struct.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Punteros a Funciones | callbacks | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_18_Punteros_a_funciones.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Bubble Sort | sorting | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_19_Bubble_sort.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Búsqueda Binaria | búsqueda | [View Code](./src/Nivel3_Modularidad_Y_Memoria_Funciones_Punteros_Recursividad/N3_20_Busqueda_binaria.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |

</details>

<details>
  <summary><h3><strong><code>04 :: POO & STL</code></strong></h3></summary>

| Status | Exercise | Topic | Source | Live Demo |
|---|---|---|---|---|
| ◻ | Clase Rectángulo | clases | [View Code](./src/Nivel4_POO_Y_STL/N4_01_Clase_rectangulo.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Encapsulamiento | getters/setters | [View Code](./src/Nivel4_POO_Y_STL/N4_02_Encapsulamiento.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Constructores y Destructores | lifetime | [View Code](./src/Nivel4_POO_Y_STL/N4_03_Constructores_y_destructores.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Sobrecarga de Métodos | overload | [View Code](./src/Nivel4_POO_Y_STL/N4_04_Sobrecarga_de_metodos.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Herencia Simple | herencia | [View Code](./src/Nivel4_POO_Y_STL/N4_05_Herencia_simple.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Polimorfismo | `virtual` | [View Code](./src/Nivel4_POO_Y_STL/N4_06_Polimorfismo.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Clases Abstractas | `= 0` | [View Code](./src/Nivel4_POO_Y_STL/N4_07_Clases_abstractas.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Sobrecarga de Operadores | operator overloading | [View Code](./src/Nivel4_POO_Y_STL/N4_08_Sobrecarga_de_operadores.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Miembros Estáticos | `static` | [View Code](./src/Nivel4_POO_Y_STL/N4_09_Miembros_estaticos.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Composición | composición | [View Code](./src/Nivel4_POO_Y_STL/N4_10_Composicion.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Vector (STL) | `std::vector` | [View Code](./src/Nivel4_POO_Y_STL/N4_11_Vector_STL.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Map (STL) | `std::map` | [View Code](./src/Nivel4_POO_Y_STL/N4_12_Map_STL.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Set (STL) | `std::set` | [View Code](./src/Nivel4_POO_Y_STL/N4_13_Set_STL.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | List (STL) | `std::list` | [View Code](./src/Nivel4_POO_Y_STL/N4_14_List_STL.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Iteradores | iterators | [View Code](./src/Nivel4_POO_Y_STL/N4_15_Iteradores.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Algoritmos STL | `std::sort`/`find` | [View Code](./src/Nivel4_POO_Y_STL/N4_16_Algoritmos_STL.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Archivos de Texto (Lectura) | `ifstream` | [View Code](./src/Nivel4_POO_Y_STL/N4_17_Archivos_texto_lectura.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Archivos de Texto (Escritura) | `ofstream` | [View Code](./src/Nivel4_POO_Y_STL/N4_18_Archivos_texto_escritura.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Archivos Binarios | `fstream` binary | [View Code](./src/Nivel4_POO_Y_STL/N4_19_Archivos_binarios.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Manejo de Excepciones | `try/catch` | [View Code](./src/Nivel4_POO_Y_STL/N4_20_Manejo_de_excepciones.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |

</details>

<details>
  <summary><h3><strong><code>05 :: C++ Moderno</code></strong></h3></summary>

| Status | Exercise | Topic | Source | Live Demo |
|---|---|---|---|---|
| ◻ | Templates de Función | templates | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_01_Templates_de_funcion.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Templates de Clase | templates | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_02_Templates_de_clase.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Smart Pointers (unique_ptr) | RAII | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_03_Smart_pointers_unique_ptr.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Smart Pointers (shared_ptr) | ownership | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_04_Smart_pointers_shared_ptr.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Expresiones Lambda | lambdas | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_05_Expresiones_lambda.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Move Semantics | `&&` | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_06_Move_semantics.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Linked List Manual | punteros | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_07_Linked_list_manual.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Stack Manual | LIFO | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_08_Stack_manual.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Queue Manual | FIFO | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_09_Queue_manual.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Árbol Binario de Búsqueda (BST) | árboles | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_10_BST.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Multithreading Básico | `std::thread` | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_11_Multithreading_basico.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Mutex y Race Conditions | `std::mutex` | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_12_Mutex_y_race_conditions.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Producer-Consumer | `condition_variable` | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_13_Producer_consumer.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Singleton Pattern | thread-safe | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_14_Singleton_pattern.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Factory Pattern | patrones | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_15_Factory_pattern.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Bit Manipulation | bitwise | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_16_Bit_manipulation_potencia_de_dos.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | RAII | recursos | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_17_RAII.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Algoritmo de Dijkstra | grafos | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_18_Algoritmo_de_Dijkstra.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Parser JSON simple | parsing | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_19_Parser_JSON_simple.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Socket Programming Básico | networking | [View Code](./src/Nivel5_CPP_Moderno_Y_Avanzado_CPP11_14_17_20/N5_20_Socket_programming_basico.cpp) | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |

</details>


<details>
  <summary><h3><strong><code>Architecture :: Bit-Hacking</code></strong></h3></summary>

| Status | Challenge | Constraint | Complexity $O(n)$ | Live Demo |
|---|---|---|---|---|
| ◻ | Valor Absoluto (Abs) — [View Code](./src/Arquitectura/Nivel1_Fundamentos_Bitwise_ComplementoA2/A_Nivel1_01_Valor_Absoluto_Abs.cpp) | sin `if`, sin `abs()`, sin `?:` | $O(1)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Verificación de Signos Opuestos — [View Code](./src/Arquitectura/Nivel1_Fundamentos_Bitwise_ComplementoA2/A_Nivel1_02_Verificacion_de_signos_opuestos.cpp) | sin `<` / `>` | $O(1)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Es Potencia de Dos — [View Code](./src/Arquitectura/Nivel1_Fundamentos_Bitwise_ComplementoA2/A_Nivel1_03_Es_potencia_de_dos.cpp) | sin bucles, sin condicionales | $O(1)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Multiplicación por 7 rápida — [View Code](./src/Arquitectura/Nivel1_Fundamentos_Bitwise_ComplementoA2/A_Nivel1_04_Multiplicacion_por_7_rapida.cpp) | sin `*`, solo `<<` y `-` | $O(1)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Set condicional (Conditional Move) — [View Code](./src/Arquitectura/Nivel1_Fundamentos_Bitwise_ComplementoA2/A_Nivel1_05_Set_condicional.cpp) | sin `if`, sin `?:` | $O(1)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Suma Condicional de Arreglo — [View Code](./src/Arquitectura/Nivel2_ControlDeFlujo_Y_Arreglos_ProcesamientoEnLote_Y_Mascaras/A_Nivel2_01_Suma_condicional_de_arreglo.cpp) | sin `if` por elemento | $O(n)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Conversión a Minúsculas — [View Code](./src/Arquitectura/Nivel2_ControlDeFlujo_Y_Arreglos_ProcesamientoEnLote_Y_Mascaras/A_Nivel2_02_Conversion_a_minusculas.cpp) | sin `if` de rangos | $O(n)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Contador de Bits (Hamming Weight) — [View Code](./src/Arquitectura/Nivel2_ControlDeFlujo_Y_Arreglos_ProcesamientoEnLote_Y_Mascaras/A_Nivel2_03_Contador_de_bits.cpp) | entero 32-bit | $O(1)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Ring Buffer Index — [View Code](./src/Arquitectura/Nivel2_ControlDeFlujo_Y_Arreglos_ProcesamientoEnLote_Y_Mascaras/A_Nivel2_04_Ring_buffer_index.cpp) | `N` potencia de 2, sin `%` | $O(1)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Encontrar elemento único (XOR) — [View Code](./src/Arquitectura/Nivel2_ControlDeFlujo_Y_Arreglos_ProcesamientoEnLote_Y_Mascaras/A_Nivel2_05_Encontrar_elemento_unico.cpp) | memoria $O(1)$ | $O(n)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Alineación de Memoria (Align Up) — [View Code](./src/Arquitectura/Nivel3_Modularidad_Y_Memoria_Alineacion_Y_Punteros/A_Nivel3_01_Alineacion_de_memoria.cpp) | `A` potencia de 2, sin condicionales | $O(1)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Intercambio XOR de Memoria — [View Code](./src/Arquitectura/Nivel3_Modularidad_Y_Memoria_Alineacion_Y_Punteros/A_Nivel3_02_Intercambio_XOR_de_memoria.cpp) | sin temporal | $O(1)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Empaquetado de Color (RGB Packing) — [View Code](./src/Arquitectura/Nivel3_Modularidad_Y_Memoria_Alineacion_Y_Punteros/A_Nivel3_03_Empaquetado_de_color_RGB.cpp) | R,G,B en [0..255] | $O(1)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Saturación Aritmética (Clamp) — [View Code](./src/Arquitectura/Nivel3_Modularidad_Y_Memoria_Alineacion_Y_Punteros/A_Nivel3_04_Saturacion_aritmetica.cpp) | sin `if` | $O(1)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Detección de Endianness — [View Code](./src/Arquitectura/Nivel3_Modularidad_Y_Memoria_Alineacion_Y_Punteros/A_Nivel3_05_Deteccion_de_endianness.cpp) | inspección de memoria | $O(1)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Clase BitFlag Eficiente — [View Code](./src/Arquitectura/Nivel4_Objetos_Y_Algoritmos_Avanzados_Abstraccion_Sin_Costo/A_Nivel4_01_Clase_BitFlag_eficiente.cpp) | hasta 64 flags en `uint64_t` | $O(1)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Comparador Lexicográfico Branchless — [View Code](./src/Arquitectura/Nivel4_Objetos_Y_Algoritmos_Avanzados_Abstraccion_Sin_Costo/A_Nivel4_02_Comparador_lexicografico_branchless.cpp) | palabras 4 bytes | $O(1)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | UTF-8 Byte Length — [View Code](./src/Arquitectura/Nivel4_Objetos_Y_Algoritmos_Avanzados_Abstraccion_Sin_Costo/A_Nivel4_03_UTF_8_byte_length.cpp) | sin `switch`/`if` encadenados | $O(1)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Filtro de Bloom — [View Code](./src/Arquitectura/Nivel4_Objetos_Y_Algoritmos_Avanzados_Abstraccion_Sin_Costo/A_Nivel4_04_Filtro_de_Bloom.cpp) | `k` hashes | $O(1)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |
| ◻ | Min/Max Branchless en Vector — [View Code](./src/Arquitectura/Nivel4_Objetos_Y_Algoritmos_Avanzados_Abstraccion_Sin_Costo/A_Nivel4_05_Minimo_maximo_branchless.cpp) | sin `if` en actualización | $O(n)$ | <a href="https://www.onlinegdb.com/" target="_blank" rel="noopener noreferrer">▶️ Run (GDB)</a> |

</details>
