#include "Suma.hpp"
#include <iostream>

int Ejercicio_2_Suma(int a, int b) {
    return a + b;
}

int main() {
    int numero1, numero2;
    std::cout << "Ingresa el primer número: ";
    std::cin >> numero1;
    std::cout << "Ingresa el segundo número: ";
    std::cin >> numero2;
    int suma = Ejercicio_2_Suma(numero1, numero2);
    std::cout << "La suma de " << numero1 << " y " << numero2 << " es: " << suma << std::endl;
    return 0;
}
