/*
Enunciado: Encontrar el elemento más grande de un arreglo.
Autor: Marvin Cifuentes
*/

#include <array>
#include <iostream>

constexpr int max_datos = 25;
int maximo_arreglo(const std::array<int,25> &arreglo){
    int maximo  = arreglo[0];
    for(int i = 1; i < max_datos;i++){
        if(maximo < arreglo[i]){
            maximo = arreglo[i];
        }
    }
    return maximo;
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
    int maximo = maximo_arreglo(arreglo);
    std::cout << "El numero mas grande del arreglo generado corresponde a " << maximo << std::endl;
    return 0;
}