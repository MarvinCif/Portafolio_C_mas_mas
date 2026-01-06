/*
Enunciado: Dado un número del 1 al 7, imprimir el día correspondiente.
Autor: Marvin Cifuentes
*/

#include <array>
#include <iostream>
#include <string_view>

int main(){
    static constexpr std::array<std::string_view, 8> Tabla {
        "Lunes",
        "Martes",
        "Miercoles",
        "Jueves",
        "Viernes",
        "Sabado",
        "Domingo",
        "Fuera de rango."
    };

    int num = 0;
    
    std::cout << "Ingrese un numero del 1 al 7: " ;
    if (std::cin >> num) {

    unsigned int index = static_cast<unsigned int> (num - 1);
    
    index = (index < 7) ? index : 7 ;
    
    std::cout << "El numero de dia corresponde al dia " << Tabla[index] << std::endl;

    }
    return 0;
}