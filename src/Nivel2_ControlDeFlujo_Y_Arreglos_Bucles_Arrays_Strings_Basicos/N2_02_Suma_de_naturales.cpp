/*
Enunciado: Sumar los primeros N números naturales.
Autor: Marvin Cifuentes
*/

//Aplicando el metodo de Gauss S = n(n+1)/2

#include <iostream>
#include <limits>

int main() {
    unsigned int N = 0;

    std::cout << "Calcular los N numeros naturales" << std::endl;

    while(true){
        std::cout << "Ingrese el N numero al que quiere llegar: ";
        if(!(std::cin >> N)){
            std::cout << "El valor ingresado no corresponde a un numero entero." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            continue;
        }
        else{
            unsigned long long Suma = (long long)N * (N+1) / 2;
            std::cout << "Al sumar los N numeros naturales hasta llegar a " << N << " se obtiene un valor de: " << Suma << std::endl;
            break;
        }
    }

    return 0;
}