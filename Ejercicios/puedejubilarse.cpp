#include "puedejubilarse.h"
#include <iostream>

PuedeJubilarse::PuedeJubilarse() {}

void PuedeJubilarse::calculo() {
    int edad;
    std::cout << "Introduzca la edad: " << std::endl;
    std::cin >> edad;

    if (edad > 65) {
        std::cout << "Puede jubilarse" << std::endl;
    } else {
        std::cout << "No puede jubilarse" << std::endl;
    }
}
