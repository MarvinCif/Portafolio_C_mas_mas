#include "Conversor.hpp"
#include <iostream>
#include <iomanip>

float Ejercicio_12_CelsiusToFahrenheit(float celsius) {
    return celsius * 9.0f / 5.0f + 32.0f;
}

float Ejercicio_12_FahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0f) * 5.0f / 9.0f;
}

int main () {
    int opc;
    float temp;

    std::cout << "BIENVENIDO AL CONVERSOR DE TEMPERATURA\n\nPor favor, seleccione una opcion.\n1. Celsius a Farenheit.\n2. Farenheit a Celsius.\n\nIngrese su opcion: ";
    std::cin >> opc;
    
    switch (opc)
    {
    case 1:{
        std::cout << "\n\nCONVERSION DE CELSIUS A FARENHEIT\n\n" << std::endl;
        std::cout << "Ingrese una temperatura (ej: 23.5): ";
        if (std::cin >> temp) {
            std::cout << "\nSi usted tiene " << temp << " Celsius y lo convierte a Farenheit obtiene " << std::setprecision(5) << Ejercicio_12_CelsiusToFahrenheit(temp) << " grados." << std::endl;
        } else {
            std::cout << "Entrada inválida." << std::endl;
        }
        break;
    }
    case 2:{
        std::cout << "\n\nCONVERSION DE FARENHEIT A CELSIUS\n\n" << std::endl;
        std::cout << "Ingrese una temperatura (ej: 23.5): ";
        if (std::cin >> temp) {
            std::cout << "\nSi usted tiene " << temp << " Farenheit y lo convierte a Celsius obtiene " << std::setprecision(5) << Ejercicio_12_FahrenheitToCelsius(temp) << " grados." << std::endl;
        } else {
            std::cout << "Entrada inválida." << std::endl;
        }
        break;
    }
    default:{
        std::cout << "La opcion seleccionada no es valida." << std::endl;
        break;
    }
    }

    return 0;
}
