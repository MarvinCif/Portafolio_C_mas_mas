/*
Enunciado: Calcular las raíces reales de ax^2 + bx + c = 0.
Autor: Marvin Cifuentes
*/

#include <iostream>
#include <cmath>
#include <array>
#include <string_view>
#include <limits>

float SolicitarEntrada(std::string_view mensaje) {
    float valor = 0.0f;
    while(true) {
        std::cout << mensaje;
        if(std::cin >> valor) {
            break;
        }
        else{
            std::cout << "El valor ingresado no corresponde a un numero. Ingrese un numero nuevamente." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    return valor;
}

void RaizCuadratica(float a, float b, float c){
    if(a != 0){
        float x1 = 0;
        float x2 = 0;
        float disc = b*b - 4.0f * a * c;
        bool reales = (disc >= 0);
        float discReales = (reales) * disc;
        float raiz_disc = std::sqrt(discReales);

        x1 = ((-b + raiz_disc) / (2.0f*a)) * reales;
        x2 = ((-b - raiz_disc) / (2.0f*a)) * reales;

        static constexpr std::array<std::string_view,2> Mensajes{
            "RAICES IMAGINARIAS (NO TIENE RAICES REALES)",
            "RAICES REALES"
        };

        std::cout << Mensajes[reales] << std::endl;
        std::cout << "La primer raiz (x1) equivale a: " << x1 << std::endl;
        std::cout << "La segunda raiz (x2) equivale a: " << x2 << std::endl;
    }
    else{
        std::cout << "El valor de 'a' no puede ser igual a 0." << std::endl;
    }
}


int main() {

    std::cout << "CALCULADORA DE RAICES EN ECUACIONES CUADRATICAS" << std::endl;

    float a = SolicitarEntrada("Ingrese el valor de 'a': ");
    float b = SolicitarEntrada("Ingrese el valor de 'b': ");
    float c = SolicitarEntrada("Ingrese el valor de 'c': ");
    
    RaizCuadratica(a, b, c);
    
    return 0;
}