/*
Enunciado: Mostrar tamaños y ejemplos de distintos tipos de datos.
Autor: Marvin Cifuentes
*/

#include "N1_03_TiposDeDatos.hpp"
#include <iostream>

void Ejercicio_3_TiposDeDatos() {
    int Num1;
    float Num2;
    double Num3;
    char Letra;

    std::cout << "La variable entero tiene un tamaño de: " << sizeof(Num1) << " bytes" << std::endl;
    std::cout << "La variable flotante tiene un tamaño de: " << sizeof(Num2) << " bytes" << std::endl;
    std::cout << "La variable double tiene un tamaño de: " << sizeof(Num3) << " bytes" << std::endl;
    std::cout << "La variable char tiene un tamaño de: " << sizeof(Letra) << " bytes" << std::endl;
}

//Se utiliza sizeof como operador para leer la cantidad de bits que maneja cada tipo de dato.

int main() {
    Ejercicio_3_TiposDeDatos();
    return 0;
}
