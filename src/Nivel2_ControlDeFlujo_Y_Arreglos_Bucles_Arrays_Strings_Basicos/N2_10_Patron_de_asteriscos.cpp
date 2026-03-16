/*
Enunciado: Imprimir un triángulo rectángulo de asteriscos.
Autor: Marvin Cifuentes
*/
#include <iostream>
#include <limits>

void imprimir_triangulo(unsigned int base, unsigned int altura){
    if (base==0 || altura ==0) return;
    for (unsigned int i = 1; i <= altura; i++){
        unsigned int limite_asteriscos = (i * base) / altura;
        for (unsigned int j = 1; j<= limite_asteriscos ; j++){
            std::cout << '*';
        }
        std::cout<< std::endl;
    }
}

int main(){
    unsigned int base = 0;
    unsigned int altura = 0;

    while(true){
        std::cout << "Imprimir triangulo rectangulo" << std::endl;
        std::cout << "Ingrese el tamano de base: ";
        if(!(std::cin >> base)){
            std::cout << "El valor ingresado no corresponde a un numero.";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            continue;
        }
            std::cout << "Ingrese el tamano de altura: ";
        if(!(std::cin >> altura)){
            std::cout << "El valor ingresado no corresponde a un numero.";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            continue;
        }
        imprimir_triangulo(base,altura);
        break;
    }
    return 0;
}