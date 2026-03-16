/*
Enunciado: Imprimir una pirámide centrada de asteriscos.
Autor: Marvin Cifuentes
*/

#include <iostream>
#include <limits>

void imprimit_triangulo(unsigned int base, unsigned int altura){
    for(unsigned int i = 0; i<=altura;i++){
        unsigned int limite_asteriscos = i*base/altura;
        for(unsigned int j = 0;j<limite_asteriscos;j++){
            std::cout<< "*";
        }
        std::cout << std::endl;
        for(unsigned int j=altura;j>i;j--){
            std::cout << " ";
        }
    }
}

int main() {
    unsigned int base = 0;
    unsigned int altura = 0;
    while(true){
        std::cout << "IMPRIMIR TRIANGULO CENTRADO" << std::endl;
        std::cout << "Ingrese la base: ";
        if(!(std::cin>>base)){
            std::cout << "El valor ingresado no corresponde a un numero.";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            continue;
        }
        std::cout << "Ingrese la altura: ";
        if(!(std::cin>>altura)){
            std::cout << "El valor ingresado no corresponde a un numero.";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            continue;
        }
        std::cout << "A continuacion se muestra el triangulo impreso: " << std::endl;
        imprimit_triangulo(base,altura);
        break;
    }
    return 0;
}