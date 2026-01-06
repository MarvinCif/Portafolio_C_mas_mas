/*
Enunciado: Pedir un carácter y determinar si es una vocal o consonante.
Autor: Marvin Cifuentes
*/

#include <iostream>

void Vocal_Consonante(char carac) {

    int Vocales = 0b10000001000100000100010;
    int posicion = (carac | 32) & 31;
    if ((Vocales >> posicion) & 1) {
        std::cout << "La letra: " << carac << " es una vocal." << std::endl;
    }
    else {
        std::cout << "La letra: " << carac << " es una consonante." << std::endl;
    }
}

int main(){
    char a = 'a';
    char b = 'b';

    Vocal_Consonante(a);
    Vocal_Consonante(b);
}