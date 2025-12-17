#include "calculararea.h"
#include <iostream>

CalcularArea::CalcularArea() {}

    void CalcularArea::calculoArea() {
        int selection;

        std::cout << "Seleccione figura: " << std::endl;
        std::cout << "1. Triangulo." << std::endl;
        std::cout << "2. Cuadrado." << std::endl;

        std::cin >> selection;

        if (selection == 1) {
            double base;
            double altura;

            std::cout << "Introduzca la base: " << std::endl;
            std::cin >> base;
            std::cout << "Introduzca la altura" << std::endl;
            std::cin >> altura;

            double area = (base * altura) / 2;

            std::cout << "El area del triangulo es " <<area<< " unidades cuadradas." << std::endl;
        } else if (selection == 2) {
            double lado;

            std::cout << "Introduzca el lado: " << std::endl;
            std::cin >> lado;

            double area = lado * lado;

            std::cout << "El area del cuadrado es " <<area<< " unidades cuadradas." << std::endl;
        } else {
            std::cout << "Seleccione una opcion valida." << std::endl;
            return;
        }
    }
