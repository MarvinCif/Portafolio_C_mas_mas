/*
Enunciado: Sumar los dígitos de un número entero.
Autor: Marvin Cifuentes
*/

#include <iostream>
#include <limits>

int suma_digitos(int num){
    if(num==0){
        return num;
    }
    return (num % 10) + suma_digitos(num/10);
}

int main(){
    int num = 0;
    while(true){
        std::cout << "Ingrese un numero entero: ";
        if(!(std::cin >> num)){
            std::cout << "El valor ingresado no es valido." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            continue;
        }
        std::cout << "La suma de los digitos del numero " << num << " es igual a " << suma_digitos(num) << std::endl;
        break;
    }
    return 0;
}