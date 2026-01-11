/*
Enunciado: Calcular n! usando un bucle.
Autor: Marvin Cifuentes
*/

#include <iostream>
#include <vector>
#include <limits>

std::vector<int> calcular_factorial(int num) {
    std::vector<int> digits;
    digits.push_back(1); // 0! y 1! comienzan en 1

    for (int i = 2; i <= num; i++) {
        int acarreo = 0;
        for (int &digit : digits) { // Iterador por referencia
            int producto = digit * i + acarreo;
            digit = producto % 10;
            acarreo = producto / 10;
        }
        while (acarreo > 0) {
            digits.push_back(acarreo % 10);
            acarreo /= 10;
        }
    }
    return digits;
}

int main() {
    int num = 0;
    std::cout << "CALCULADORA DE UN FACTORIAL" << std::endl;
    while (true)
    {
        std::cout << "Ingrese un numero para calcular factorial: ";
        if(!(std::cin >> num)){
            std::cout << "El valor ingresado no es un numero." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            continue;
        }
        if(num < 0){
            std::cout << "El valor ingresado no puede ser negativo." << std::endl;
            continue;
        }
        std::vector<int> resultado = calcular_factorial(num);
            
        std::cout << "El factorial es: ";
        // Imprimimos en reversa
        for (std::vector<int>::reverse_iterator it = resultado.rbegin(); it != resultado.rend(); ++it) {
            std::cout << *it;
        }
        std::cout << std::endl;
        break;
    }
    return 0;
}