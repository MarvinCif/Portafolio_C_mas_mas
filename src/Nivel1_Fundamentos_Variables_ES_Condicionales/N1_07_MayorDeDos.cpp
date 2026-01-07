/*
Enunciado: Determinar el mayor de dos números.
Autor: Marvin Cifuentes
*/

#include "N1_07_Mayor.hpp"
#include <iostream>

int Ejercicio_7_MayorDeDos(int num1, int num2) {
    int resta = num1 - num2;
    int k = (resta >> 31) & 0x1 ;
    return num1 - k * resta;
}

int main() {
    int num1 = -10;
    int num2 = -110;
    std::cout << "El mayor numero es: " << Ejercicio_7_MayorDeDos(num1 , num2) << std::endl;
    return 0;
}
