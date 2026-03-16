/*
Enunciado: Calcular la media de los elementos de un arreglo.
Autor: Marvin Cifuentes
*/

#include <iostream>
#include <array>

constexpr int max_datos = 25;

int promedio(const std::array<int,max_datos> &vector){
    int promedio = 0;
    for (int i = 0 ; i < max_datos ; i++){
        promedio += vector[i];
    }
    promedio /= max_datos;
    return promedio;
}

int main(){
    srand(time(nullptr));
    std::cout << "PROMEDIO DE DATOS DE UN ARREGLO" << std::endl;
    std::array<int , max_datos> arreglo;
    std::cout << "\nARREGLO GENERADO" << std::endl;
    for(int i = 0 ; i < max_datos ; i++){
        arreglo[i] = rand() % 100;
        std::cout << " " << arreglo[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "\nEl promedio de los datos generados es de: " << promedio(arreglo) << std::endl;
    return 0;
}