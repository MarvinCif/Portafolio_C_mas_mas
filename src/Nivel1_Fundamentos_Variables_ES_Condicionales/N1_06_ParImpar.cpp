#include "N1_06_ParImpar.hpp"
#include <iostream>
#include <limits> //Se utiliza para limitar el numero de decimales
#include <cstdlib>

bool Ejercicio_6_ParImpar(long long num) {
    return (num % 2) == 0;
}

int main() {
    long long numero, opc;

    do {
        std::system("clear");
        std::cout << "SELECCIONE UNA OPCION\n\n1. Realizar operacion\n2. Salir\nOpcion: ";
        if (!(std::cin >> opc)) break;

        if (opc == 1) {
            std::cout << "\nIngrese un numero: ";
            if (!(std::cin >> numero)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }
            std::cout << "\nEl numero es " << (Ejercicio_6_ParImpar(numero) ? "par" : "impar") << "\n\n";
            std::cout << "Presione Enter para continuar...";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.get();
        } else if (opc == 2) {
            break;
        } else {
            std::cout << "Opcion invalida. Presione Enter para continuar...";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.get();
        }
    } while (true);

    return 0;
}
