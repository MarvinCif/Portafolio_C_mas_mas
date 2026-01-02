# Portafolio-C++

Propósito
---------
Portafolio-C++ es un repositorio público donde se recopilan y documentan ejercicios en C++ conforme voy aprendiendo el lenguaje. El objetivo es tener implementaciones pedagógicas y autocontenidas que muestren soluciones claras a problemas clásicos y contemporáneos.

Lista de ejercicios (planeados)
------------------------------
Nivel 1: Fundamentos (Variables, E/S, Condicionales)
- Hola Mundo: Imprimir "Hola Mundo" en la consola.
- Suma de dos números: Pedir dos enteros y mostrar la suma.
- Tipos de datos: Imprimir el tamaño en bytes de `int`, `float`, `double` y `char` usando `sizeof`.
- Intercambio (temporal): Intercambiar dos variables con una temporal.
- Intercambio sin temporal: Intercambio por aritmética o XOR.
- Par o Impar: Determinar si un número es par o impar.
- Mayor de dos: Comparar dos números e imprimir el mayor.
- Mayor de tres: Comparar tres números e imprimir el mayor.
- Año bisiesto: Verificar si un año es bisiesto.
- Calculadora simple: Operaciones básicas con `switch`.
- Área de un círculo: Calcular el área dado el radio (PI).
- Conversor de temperatura: Convertir Celsius ↔ Fahrenheit.
- Verificar vocal: Pedir un carácter y determinar si es vocal o consonante.
- Número positivo/negativo/cero: Clasificar un número ingresado.
- Días de la semana: Dado 1..7 imprimir el día correspondiente.
- Cálculo de descuento: Aplicar 10% si la compra supera cierto monto.
- Divisibilidad: Comprobar divisibilidad por 5 y 11.
- Ecuación cuadrática: Calcular raíces reales de $ax^2 + bx + c = 0$.
- ASCII: Imprimir el valor ASCII de un carácter ingresado.
- Validación de edad: Determinar si una persona es mayor de edad.

Nivel 2: Control de Flujo y Arreglos (Bucles, Arrays, Strings Básicos)
- Imprimir 1 al 100 (for)
- Suma de naturales (N)
- Factorial (bucle)
- Tabla de multiplicar
- Serie Fibonacci (iterativa)
- Invertir número
- Suma de dígitos
- Números primos y primos en rango
- Patrones de asteriscos (triángulo, pirámide)
- Máximo/Mínimo en array, Promedio, Buscar, Contar, Invertir
- Palíndromo (string), Contar vocales, Concatenar cadenas manualmente

Nivel 3: Modularidad y Memoria (Funciones, Punteros, Recursividad)
- Función Potencia: Calcular $x^y$ sin `pow()`.
- Paso por Valor vs Referencia: Demostraciones.
- Punteros básicos y aritmética de punteros.
- Swap con punteros.
- Factorial/Fibonacci recursivos.
- Torres de Hanoi.
- MCD (Euclides) recursivo.
- Operaciones con cadenas (strlen, strcpy) usando punteros.
- Memoria dinámica (`new/delete`) y matrices dinámicas.
- Structs, arrays de structs y punteros a structs.
- Punteros a funciones, Bubble Sort, Búsqueda Binaria.

Nivel 4: Programación Orientada a Objetos y STL
- Clases, encapsulamiento, constructores/destructores.
- Herencia y polimorfismo.
- Clases abstractas y sobrecarga de operadores.
- Contenedores STL (`vector`, `map`, `set`, `list`) y algoritmos (`std::sort`, `std::find`).
- Lectura/escritura de archivos y manejo de excepciones.

Nivel 5: C++ Moderno y Avanzado (C++11/14/17/20)
- Templates (función y clase), Smart pointers (`unique_ptr`, `shared_ptr`).
- Lambdas, Move semantics y RAII.
- Implementaciones manuales: linked list, stack, queue, BST.
- Concurrencia básica (`std::thread`), mutexes y condition_variable.
- Patrones (Singleton, Factory), algoritmos avanzados y parsing simples.

EJERCICIOS (ARQUITECTURA)
Nivel 1: Fundamentos (Bitwise y Aritmética de Complemento a 2)
- Valor absoluto sin branching, verificación de signos opuestos, potencia de dos, multiplicación por 7 usando shifts, set condicional branchless.

Nivel 2: Control de Flujo y Arreglos (Procesamiento en lote y Máscaras)
- Suma condicional sin `if`, conversión a minúsculas por bits, contador de bits (Kernighan), ring-buffer index sin `%`, elemento único con XOR.

Nivel 3: Modularidad y Memoria (Alineación y Punteros)
- Align up, intercambio XOR por punteros, empaquetado RGB, saturación aritmética, detección de endianness.

Nivel 4: Objetos y Algoritmos Avanzados (Abstracción sin costo)
- BitFlag (uint64_t), comparador lexicográfico branchless, UTF-8 length lookup, Bloom filter, mínimo/máximo branchless.

