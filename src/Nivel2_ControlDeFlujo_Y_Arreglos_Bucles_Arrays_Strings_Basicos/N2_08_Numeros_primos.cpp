/*
Enunciado: Verificar si un número es primo.
Autor: Marvin Cifuentes
*/

#include <iostream>
#include <limits>

bool EsPrimo(unsigned long long num){
    if(num<=1) return false;
    if (num<=3) return true;
    if (num %2 == 0 || num%3 ==0) return false;

    for(unsigned long long i=5;i*i <=num ; i+=6){
        if(num%i == 0 || num%(i+2) == 0) return false;
    }

    return true;
}

int main(){
    unsigned long long num = 0;
    while(true){
        std::cout << "VERIFICAR SI UN NUMERO ES PRIMO" << std::endl;
        std::cout << "Ingrese un numero: ";
        if(!(std::cin >> num)){
            std::cout << "El valor ingresado no corresponde a un numero, intente nuevamente." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            continue;
        }   
        std::cout << "El numero " << num << (EsPrimo(num) ? " es un numero primo." : " no es un numero primo.") << std::endl;
        break;
    }

    return 0;
}