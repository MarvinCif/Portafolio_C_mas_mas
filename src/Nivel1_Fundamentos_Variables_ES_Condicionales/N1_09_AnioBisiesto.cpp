/*
Enunciado: Determinar si un año es bisiesto.
Autor: Marvin Cifuentes
*/

#include "N1_09_AnioBisiesto.hpp"
#include <iostream>

bool Ejercicio_9_AnioBisiesto(int anio) {
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        return true;
    }
    else return false;
}

int main() {
    int num = 1900;
    std::cout << "El anio " << num << (Ejercicio_9_AnioBisiesto(num) ? " es un anio bisiesto." : " no es un anio bisiesto.") << std::endl;
    return 0;
}
