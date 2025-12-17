#include "positivonegativo.h"
#include <iostream>

PositivoNegativo::PositivoNegativo() {}

void PositivoNegativo::calcularSigno() {
    int num = 0;
    std::cout << "Ingrese un numero entero: ";
    std::cin >> num;

    if (num > 0) {
        std::cout << "El numero " << num << " es positivo" << std::endl;
    } else {
        if (num < 0) {
            std::cout << "El numero " << num << " es negativo." << std::endl;
        } else {
            std::cout << "El numero " << num << " es cero." << std::endl;
        }
    }
}

