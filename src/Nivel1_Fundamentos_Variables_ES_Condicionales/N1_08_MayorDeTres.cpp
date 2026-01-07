/*
Enunciado: Determinar el mayor de tres números.
Autor: Marvin Cifuentes
*/

#include "N1_07_Mayor.hpp"
#include <iostream>

int Ejercicio_8_MayorDeTres(int num1, int num2, int num3) {
    int resta1 = num1 - num2;
    int a = (resta1 >> 31) & 0x1;
    int mayor_num1_num2 = num1 - a*resta1;
    int resta2 = mayor_num1_num2 - num3;
    int b = (resta2 >> 31) & 0x1;
    return mayor_num1_num2 - b * resta2;
}

int main() {
    int num1 = -3312;
    int num2 = -331;
    int num3 = -300;

    std::cout << "El mayor de tres es: " << Ejercicio_8_MayorDeTres(num1,num2,num3) << std::endl;
    return 0;
}
