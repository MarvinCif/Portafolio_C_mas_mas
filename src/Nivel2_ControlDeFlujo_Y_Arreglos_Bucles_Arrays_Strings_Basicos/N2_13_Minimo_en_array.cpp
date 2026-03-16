/*
Enunciado: Encontrar el elemento más pequeño de un arreglo.
Autor: Marvin Cifuentes
*/

#include <array>
#include <iostream>

constexpr int max_datos = 25;
int maximo_arreglo(const std::array<int,25> &arreglo){
    int minimo  = arreglo[0];
    for(int i = 1; i < max_datos;i++){
        if(minimo > arreglo[i]){
            minimo = arreglo[i];
        }
    }
    return minimo;
}

int main(){
    srand(time(nullptr));
    std::array<int,max_datos> arreglo;
    std::cout <<"Arreglo generado: " << std::endl;
    for(int i =0 ; i < max_datos; i++){
        arreglo[i] = rand() % 100;
        std::cout << " " << arreglo[i] << " ";
    }
    std::cout << std::endl;
    int minimo = maximo_arreglo(arreglo);
    std::cout << "El numero mas pequeno del arreglo generado corresponde a " << minimo << std::endl;
    return 0;
}