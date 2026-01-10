/*
Enunciado: Determinar si una persona es mayor de edad.
Autor: Marvin Cifuentes
*/

#include <iostream>
#include <limits>
#include <string_view>
#include <array>

constexpr int edad_legal = 18;
constexpr int edad_minima = 0;
constexpr int edad_maxima = 120;

bool MayorEdad(int edad){
    return edad >= edad_legal;
}

bool EdadRango(int edad){
    return (edad >= edad_minima && edad <= edad_maxima);
}

int main(){
    int edad = 0;

    static constexpr std::array<std::string_view,2> Mensajes{
        "Usted no es mayor de edad",
        "Usted es mayor de edad"
    };

    while(true){
        std::cout << "Ingrese su edad: ";
        if(!(std::cin >> edad)) {
            std::cout << "El valor ingresado no corresponde a un numero." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            continue;
        }
        if(!(EdadRango(edad))){
            std::cout << "La edad debe estar entre 0 y 120." << std::endl;
            continue;
        }
        std::cout << Mensajes[MayorEdad(edad)] << std::endl;
        break;
    }
}