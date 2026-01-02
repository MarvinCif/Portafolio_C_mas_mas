#include "N1_10_Calculadora.hpp"
#include <iostream>

// Variable global para guardar el resultado anterior
static int ans = 0;

void Guardar_Resultado(int resultado) { ans = resultado; }

int Ejercicio_10_suma(int num1, int num2){
    int suma = num1 + num2;
    Guardar_Resultado(suma);
    return suma;
}

int Ejercicio_10_resta(int num1, int num2){
    int resta = num1 - num2;
    Guardar_Resultado(resta);
    return resta;
}

int Ejercicio_10_div(int num1, int num2){
    int divi = num1 / num2;
    Guardar_Resultado(divi);
    return divi;
}

int Ejercicio_10_mult(int num1, int num2){
    int mult = num1 * num2;
    Guardar_Resultado(mult);
    return mult;
}

void mostrarMenu() {
    std::cout << "\n========== CALCULADORA ==========" << std::endl;
    std::cout << "1. Suma" << std::endl;
    std::cout << "2. Resta" << std::endl;
    std::cout << "3. Multiplicacion" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Usar ANS (" << ans << ")" << std::endl;
    std::cout << "6. Salir" << std::endl;
    std::cout << "=================================" << std::endl;
    std::cout << "Seleccione una opcion: ";
}

void pedirNumeros(int &num1, int &num2, bool usarAns) {
    if (usarAns) {
        std::cout << "Usando ANS = " << ans << " como primer numero." << std::endl;
        num1 = ans;
        std::cout << "Ingrese el segundo numero: ";
        std::cin >> num2;
    } else {
        std::cout << "Ingrese el primer numero: ";
        std::cin >> num1;
        std::cout << "Ingrese el segundo numero: ";
        std::cin >> num2;
    }
}

void realizarOperacion(int operacion, bool usarAns) {
    int num1, num2, resultado;
    pedirNumeros(num1, num2, usarAns);
    
    switch (operacion) {
        case 1:
            resultado = Ejercicio_10_suma(num1, num2);
            std::cout << num1 << " + " << num2 << " = " << resultado << std::endl;
            break;
        case 2:
            resultado = Ejercicio_10_resta(num1, num2);
            std::cout << num1 << " - " << num2 << " = " << resultado << std::endl;
            break;
        case 3:
            resultado = Ejercicio_10_mult(num1, num2);
            std::cout << num1 << " * " << num2 << " = " << resultado << std::endl;
            break;
        case 4:
            if (num2 == 0) {
                std::cout << "Error: No se puede dividir entre cero." << std::endl;
            } else {
                resultado = Ejercicio_10_div(num1, num2);
                std::cout << num1 << " / " << num2 << " = " << resultado << std::endl;
            }
            break;
    }
}

int main() {
    int opc = 0;
    int subOpc = 0;
    
    std::cout << "Bienvenido a la Calculadora!" << std::endl;
    
    do {
        mostrarMenu();
        std::cin >> opc;
        
        switch (opc) {
            case 1:
                realizarOperacion(1, false);
                break;
            case 2:
                realizarOperacion(2, false);
                break;
            case 3:
                realizarOperacion(3, false);
                break;
            case 4:
                realizarOperacion(4, false);
                break;
            case 5:
                std::cout << "\nOperacion con ANS (" << ans << "):" << std::endl;
                std::cout << "1. Suma  2. Resta  3. Multiplicacion  4. Division" << std::endl;
                std::cout << "Seleccione operacion: ";
                std::cin >> subOpc;
                if (subOpc >= 1 && subOpc <= 4) {
                    realizarOperacion(subOpc, true);
                } else {
                    std::cout << "Operacion no valida." << std::endl;
                }
                break;
            case 6:
                std::cout << "Gracias por usar la calculadora. Hasta pronto!" << std::endl;
                break;
            default:
                std::cout << "La opcion seleccionada no esta disponible." << std::endl;
        }
    } while(opc != 6);
    
    return 0;
}
