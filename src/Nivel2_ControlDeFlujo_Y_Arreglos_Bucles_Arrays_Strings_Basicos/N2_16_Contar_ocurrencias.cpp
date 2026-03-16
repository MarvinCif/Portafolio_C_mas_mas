/*
Enunciado: Contar cuántas veces aparece un número X en el arreglo.
Autor: Marvin Cifuentes
*/

#include <array>
#include <iostream>
#include <limits>

constexpr int max_nums = 200;

int contar_arreglo(std::array<int,max_nums> &arreglo, int valor_buscado){
    int contador = 0;
    for (int i = 0; i < max_nums; i++){
        if(arreglo[i] == valor_buscado){
            contador +=1;
        }
    }
    return contador;
}

int main(){
    int num_buscado=0;
    std::array<int,max_nums> arreglo_busqueda;
    srand(time(nullptr));

    while(true){
        std::cout << "CONTEO DE NUMEROS EN UN ARREGLO" << std::endl;
        std::cout << "Se genero el siguiente arreglo de forma aleatoria: " << std::endl;
        for(int i = 0 ; i<max_nums ; i++){
            arreglo_busqueda[i] = rand() %100;
            std::cout << " " << arreglo_busqueda[i] << " ";
        }
        std::printf("\n");

        std::cout << "Ingrese un numero a buscar: ";
        if(!(std::cin >> num_buscado)){
            std::cout << "El valor ingresado no corresponde a un numero." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            continue;
        }
        std::cout << "El numero " << num_buscado << " aparece un total de " << contar_arreglo(arreglo_busqueda,num_buscado) << " veces." << std::endl;
        break;
    }

    return 0;
}