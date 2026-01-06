#include "N1_04_Intercambio.hpp"
#include <iostream>

void Ejercicio_5_Intercambio_XOR(int *num1,int *num2) {
    if (*num1 == *num2) return;
    *num1 = *num1 ^ *num2;
    *num2 = *num1 ^ *num2;
    *num1 = *num1 ^ *num2;
}

/*
EJEMPLO DE LO QUE SUCEDE
int num1 = 1 --> en binario = 0001
int num2 = 2 --> en binario = 0010

Al operar num1 = num1 ^ num2 lo que ocurre es:
num1 = 0001 ^ 0010 = 0011

Al operar num2 = num1 ^ num2 lo que ocurre es:
num2 =0011 ^ 0010 = 0001 <-- Recuerda que el XOR acepta una entrada u otra, no ambas, es exclusivo.

Finalmente al operar num1 = num1 ^ num2 ocurre lo siguiente:
num1 = 0011 ^ 0001 = 0010

Quedando como resultado
num1 = 0010 = 2
num2 = 0001 = 1
*/

int main() {
    int num1 = 5;
    int num2 = 10;

    std::cout << "El primer número es: " << num1 << std::endl;
    std::cout << "El segundo número es: " << num2 << std::endl;
    std::cout << "\n\nAHORA VAMOS A INTERCAMBIAR LOS VALORES" << std::endl;
    Ejercicio_5_Intercambio_XOR(&num1,&num2);
    std::cout << "El primer número es: " << num1 << std::endl;
    std::cout << "El segundo número es: " << num2 << std::endl;
    return 0;
}
