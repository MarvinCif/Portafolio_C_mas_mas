#include "../../include/TiposDatos.hpp"
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

int main() {
    Ejercicio_3_TiposDeDatos();
    return 0;
}
