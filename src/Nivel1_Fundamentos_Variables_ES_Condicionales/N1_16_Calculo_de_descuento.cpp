/*
Enunciado: Aplicar un descuento del 10% si la compra supera cierto monto.
Autor: Marvin Cifuentes
*/

//Se evita el uso de structs o clases hasta llegar a POO en N2, pero es un camino mas simple.

#include <iostream>
#include <array>
#include <string_view>
#include <limits>

void Descuento(float Acumulado) {
    constexpr float PrecioDescuento = 0.9;
    if (Acumulado > 30){
        std::cout << "\n\nEstimado cliente, ha recibido un descuento del 10% por el consumo realizado." << std::endl;
        std::cout << "El precio a pagar ahora es de Q" << Acumulado * PrecioDescuento << std::endl;
    }
}

int main(){
    int num = 0;
    float Acumulado = 0;    
    static constexpr std::array<std::string_view, 4> Vegetales {
        "Papas",
        "Zanahorias",
        "Lechuga",
        "Tomate",
    };

    static constexpr std::array<int,4> Precios {
        5,
        10,
        15,
        20
    };

    std::cout << "BIENVENIDO A NUESTRA TIENDA" << std::endl;
    do{
        std::cout << "Tenemos disponibles los siguientes productos: \n" << std::endl;
        for (int i = 0; i <4 ; i++) {
            std::cout << (i+1) << ". " << Vegetales[i] << " -- Q" << Precios[i] << std::endl;
        }
        std::cout << "5. FINALIZAR COMPRA" << std::endl;
        std::cout << "SI DESEA COMPRAR ALGO SELECCIONE UN PRODUCTO\n\n Seleccion:  ";
        if(!(std::cin >> num)) {
            std::cout << "Entrada invalida. Por favor ingrese un numero." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        else{
            if(num >= 1 && num <=4){
            unsigned int index = static_cast<unsigned int> (num-1);
            std::cout << "Se ha agregado " << Vegetales[index] << " al carrito." << std::endl;
            Acumulado = Acumulado + Precios[index];
            std::cout << "Tiene acumulado un costo de Q" << Acumulado << std::endl;
            }
            else if(num == 5){
                break;
            }
            else {
                std::cout << "La opcion seleccionada no se encuentra dentro del rango." << std::endl;
            }
        }
    }while(num != 5);
    std::cout << "Usted ha finalizado su compra, el precio de los productos seleccionados tiene un total de Q" << Acumulado << std::endl;
    Descuento(Acumulado);
    std::cout << "¡Gracias por su compra!" << std::endl;
    return 0;
}