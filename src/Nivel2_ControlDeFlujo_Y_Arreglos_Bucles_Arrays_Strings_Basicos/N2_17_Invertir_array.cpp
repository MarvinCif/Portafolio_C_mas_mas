/*
Enunciado: Invertir el orden de los elementos de un arreglo in-place.
Autor: Marvin Cifuentes
*/

#include <array>
#include <iostream>
#include <cstdlib>
#include <ctime>

constexpr int max_datos = 25;

void  invertir_arreglo(std::array<int,max_datos> &arreglo){
    int temp = 0;
    for(int i = 0 ; i < max_datos/2 ; i++){
        temp = arreglo[max_datos-1-i];
        arreglo[max_datos-1-i] = arreglo[i];
        arreglo[i] = temp;
    }
}

int main(){
    std::array<int,max_datos> arreglo_aleatorio;
    srand(time(nullptr));

    std::cout << "INVERTIR UN ARREGLO" << std::endl;
    std::cout << "Se genero el siguiente arreglo de forma aleatoria: " << std::endl;
    for(int i = 0 ; i<max_datos ; i++){
        arreglo_aleatorio[i] = rand() %100;
        std::cout << " " << arreglo_aleatorio[i] << " ";
    }
    invertir_arreglo(arreglo_aleatorio);
    std::cout << "\nEl arreglo anterior se invierte de la siguiente manera: " << std::endl;
    for(int i = 0 ; i<max_datos ; i++){
        std::cout << " " << arreglo_aleatorio[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}