#include "N1_04_Intercambio.hpp"
#include <iostream>

void Ejercicio_4_Intercambio_Temporal(int *num1, int *num2) {
    int *temp = new int;
    *temp = *num1;
    *num1 = *num2;
    *num2 = *temp;
    delete temp;
}

int main() {
    int num1 = 5;
    int num2 = 10;

    std::cout << "El primer número es: " << num1 << std::endl;
    std::cout << "El segundo número es: " << num2 << std::endl;
    std::cout << "\n\nAHORA VAMOS A INTERCAMBIAR LOS VALORES" << std::endl;
    Ejercicio_4_Intercambio_Temporal(&num1,&num2);
    std::cout << "El primer número es: " << num1 << std::endl;
    std::cout << "El segundo número es: " << num2 << std::endl;
    return 0;
}
