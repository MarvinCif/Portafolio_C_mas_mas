/*
Enunciado: Imprimir el valor ASCII de un carácter ingresado.
Autor: Marvin Cifuentes
*/

#include <stdio.h>

int main(){
    char c = ' ';

    if(scanf("%c", &c) == 1){
        printf("El valor ASCII de '%c' es: %d\n", c, (int)c);
    }
    return 0;
}