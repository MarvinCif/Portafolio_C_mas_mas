/*
Enunciado: Dado un entero (ej: 123), imprimirlo al revés (321).
Autor: Marvin Cifuentes
*/

#include <iostream>
#include <limits>

long long NumeroInvertido(long long num){
    long long signo = num >> 63;
    long long n = (num ^ signo) - signo;
    long long rev = 0;

    while(n > 0){
        rev = (rev << 3) + (rev << 1);
        rev = rev + (n % 10);         
        n /= 10;
    }
    return (rev ^ signo) - signo;
}

int main(){
    long long num = 0;

    while(true){
        std::cout << "IMPRIMIR AL REVES UN NUMERO" << std::endl;
        std::cout << "Ingrese un numero: ";
        
        // Validación robusta de entrada
        if(!(std::cin >> num)){
            std::cout << "El valor ingresado no corresponde a un numero, ingrese un entero de manera correcta.\n\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        
        std::cout << "El numero " << num << " al revés se observa como: " << NumeroInvertido(num) << std::endl;
        break;
    }
    return 0;
}