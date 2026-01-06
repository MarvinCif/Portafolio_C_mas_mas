/*
Enunciado: Clasificar un número ingresado.
Autor: Marvin Cifuentes
*/

#include <iostream>
#include <array>
#include <string_view>


constexpr int PosiNegaCero(int num) noexcept {
    return (num!=0) + (static_cast<unsigned int>(num) >> 31);
}

int main(){
    static constexpr std::array<std::string_view, 3> tabla = {
        "cero",
        "positivo",
        "negativo"
    };

    int num = 0;
    std::cout << "Ingrese un numero: ";
    if(std::cin >> num){
        std::cout << "El numero que usted ha ingresado es " << tabla[PosiNegaCero(num)] << std::endl;
    }

    return 0;
}