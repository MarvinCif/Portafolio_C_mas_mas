#include "Intercambio.hpp"
#include <iostream>

void Ejercicio_5_Intercambio_XOR(int *num1,int *num2) {
    if (*num1 == *num2) return;
    *num1 = *num1 ^ *num2;
    *num2 = *num1 ^ *num2;
    *num1 = *num1 ^ *num2;
}

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
