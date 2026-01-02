#include "../../include/AreaCirculo.hpp"
#include <iostream>
#include <cmath>
#include <iomanip>

double Ejercicio_11_AreaCirculo(double radio) {
    double area = M_PI * radio * radio;
    return area;
}

int main() {
    double radio = 4.00;
    std::cout<< "El area de un circulo de radio " << std::setprecision(10) << radio <<  " es " << Ejercicio_11_AreaCirculo(radio) << std::endl;
    return 0;
}
