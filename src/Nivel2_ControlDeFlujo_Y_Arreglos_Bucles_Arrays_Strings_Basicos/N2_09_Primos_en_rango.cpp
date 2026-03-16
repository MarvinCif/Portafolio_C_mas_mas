/*
Enunciado: Imprimir todos los primos entre 1 y N.
Autor: Marvin Cifuentes
*/

#include <iostream>
#include <limits>

bool es_primo(unsigned long long num, unsigned long long divisor = 2){
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % divisor == 0) return false;
    if (divisor*divisor > num) return true;
    return es_primo(num,divisor+1);
}

void buscar_primo(unsigned long long longitud, unsigned long long inicio=1){
    if(es_primo(inicio)){
        std::cout << inicio << " ";
    }
    if(!longitud==0) buscar_primo(longitud-1,inicio+1);
}

int main(){
    unsigned long long num;
    while(true){
        std::cout << "RANGO DE NUMEROS PRIMOS" << std::endl;
        std::cout << "Ingrese hasta que N entero desea buscar primos: ";
        if(!(std::cin >> num)){
            std::cout << "El valor ingresado no corresponde a un numero." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            continue;
        }
        std::cout << "A continuacion se presentan todos los primos de 1 a " << num << std::endl;
        buscar_primo(num);
        break;
    }
    return 0;
}