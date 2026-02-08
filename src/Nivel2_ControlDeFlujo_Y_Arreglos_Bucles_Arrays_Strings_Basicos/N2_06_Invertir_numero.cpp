/*
Enunciado: Dado un entero (ej: 123), imprimirlo al revés (321).
Autor: Marvin Cifuentes
*/

#include <iostream>
#include <limits>

long long NumeroInvertido(long long num){
    if(num == 0) return 0;
    long long sigBit = ((num >> 31) & 0x1) ? -1 : 1;
    long long n = num;
    if(n < 0) n = -n;
    long long rev = 0;
    while(n > 0){
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    rev *= sigBit;
    return static_cast<int>(rev);
}


int main(){
    long long num = 0;

    while(true){
        std::cout << "IMPRIMIR AL REVES UN NUMERO" << std::endl;
        std::cout << "Ingrese un numero: ";
        if(!(std::cin>>num)){
            std::cout<<"El valor ingresado no corresponde a un numero, ingrese un entero de manera correcta." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        std::cout << "El numero " << num << " al revés se observa como: " << NumeroInvertido(num) << std::endl;
        break;
    }
    return 0;
}