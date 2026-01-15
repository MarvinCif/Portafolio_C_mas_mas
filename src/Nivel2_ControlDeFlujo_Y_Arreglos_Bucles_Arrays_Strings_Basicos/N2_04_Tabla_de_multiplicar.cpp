/*
Enunciado: Generar la tabla de multiplicar de un número dado.
Autor: Marvin Cifuentes
*/

#include <iostream>
#include <limits>

void Tabla(int num){
    for(int i = 0; i < num ; i++){
        std::cout << "| " << num*i << " |" << std::endl;
    };
}

int main(){
    int num = 0;
    std::cout << "Ingrese un numero :";
    if(!std::cin >> num){
        std::cout << "El dato ingresado no corresponde a un numero." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),' \n ');
    }
    else{
        std::cout << "La tabla de multiplicar para el numero " << num << " es: " << std::endl;
        Tabla(num);
    }
}