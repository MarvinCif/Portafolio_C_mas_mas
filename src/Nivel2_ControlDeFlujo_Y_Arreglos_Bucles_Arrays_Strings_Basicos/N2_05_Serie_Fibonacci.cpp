/*
Enunciado: Imprimir los primeros N términos de la serie Fibonacci.
Autor: Marvin Cifuentes
*/


#include <iostream>
#include <limits>

long long Fibonacci(int num){
    if(num <=1){
        return num;
    }
    else{
        return Fibonacci(num-1) + Fibonacci(num-2);
    }
}

int main(){
    long long temp;
    unsigned int num;
    std::cout<<"SERIE DE FIBONACCI" << std::endl;
    while(true){
        std::cout<<"Ingrese un numero:";
        if(!(std::cin >> temp)){
            std::cout<<"El valor ingresado debe ser un valor numerico y mayor o igual a cero." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            continue;
        }
        if(temp < 0){
            std::cout<<"El valor ingresado debe ser un valor numerico y mayor o igual a cero." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            continue;
        }
        else{
            num = temp;
            std::cout<<"La serie de Fibonacci para el numero " << num << " es: " << Fibonacci(num) << std::endl;
            break;
        }
    }
    return 0;
}