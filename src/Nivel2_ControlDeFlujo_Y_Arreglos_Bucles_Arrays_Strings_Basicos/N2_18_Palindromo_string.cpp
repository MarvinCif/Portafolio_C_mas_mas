/*
Enunciado: Verificar si una palabra se lee igual al revés.
Autor: Marvin Cifuentes
*/

#include <iostream>
#include <string>
#include <limits>
#include <cctype>

bool es_palindromo(const std::string &palin){    
    std::size_t tamano = palin.length();
    for(std::size_t i = 0 ; i < (tamano)/2; i++){
        if(std::tolower(static_cast<unsigned char>(palin[i])) != std::tolower(static_cast<unsigned char>(palin[tamano-1-i]))){
            return false;
        }
    }
    return true;
}

int main(){
    std::string palin = "";
    std::cout << "VERIFICAR SI UNA PALABRA ES PALINDROMO.\n";
    std::cout << "Escriba una palabra a continuacion: ";
    if(!(std::cin >> palin)){
        std::cout << "Error de lectura de datos ingresados.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        return 1;
    }
    std::cout << "La palabra " << palin << (es_palindromo(palin) ? " es un palindromo\n" : " no es un palindromo\n");
    return 0;
}