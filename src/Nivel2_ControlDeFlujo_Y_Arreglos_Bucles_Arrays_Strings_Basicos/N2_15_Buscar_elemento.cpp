/*
Enunciado: Búsqueda lineal de un número en un arreglo.
Autor: Marvin Cifuentes
*/

#include <iostream>
#include <array>
#include <limits>

constexpr int max_nums = 30;

void busqueda_numero(const std::array<int,max_nums> &array, int valor_buscado){
    for(int i = 0; i<max_nums;i++){
        if(array[i]==valor_buscado){
            std::cout << "El valor " << valor_buscado << " se encuentra en el arreglo en la posicion " << i << std::endl;
        }
        else if(array[i]==array[max_nums] && !(array[i]==valor_buscado)){
            std::cout << "El valor " << valor_buscado << " no se encuentra dentro del arreglo." << std::endl;
        }
    }
}

int main(){
    int valor_buscado = 0;
    srand(time(nullptr));
    std::array<int,max_nums> array;
    while(true){
        std::cout<< "BUSQUEDA DE NUMEROS EN ARREGLOS"<< std::endl;
        std::cout << "A continuacion se presenta un arreglo generado aleatoriamente: ";
        for(int i = 0;i < max_nums; i++){
            array[i] = rand() % 200;
            std::cout << " " << array[i] << " ";
        }
        std::printf("\n");
        std::cout << "Ingrese un numero a buscar para el arreglo anterior: ";
        if(!(std::cin >> valor_buscado)){
            std::cout << "El valor ingresado no corresponde a un nuemro. Intente nuevamente." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            continue;
        }
        busqueda_numero(array,valor_buscado);
        break;
    }
    return 0;
}