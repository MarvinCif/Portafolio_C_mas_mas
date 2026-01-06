/*
Enunciado: Comprobar si un número es divisible por 5 y 11.
Autor: Marvin Cifuentes
*/

#include <iostream>

void Divisible(int num){
    if (num %5 == 0 && num%11 ==0){
        std::cout << "El numero ingresado es divisible por 5 y 11." << std::endl;
    }
    else{
        std::cout << "El numero ingresado no es divisible por 5 y 11." << std::endl;
    }
}

int main(){
    int num1 = 3;
    int num2 = 55;
    std::cout << "Numero ingresado " << num1 << std::endl;
    Divisible(num1);
    std::cout << "Numero ingresado " << num2 << std::endl;
    Divisible(num2);
    return 0;
}