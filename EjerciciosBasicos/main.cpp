#include <iostream>
#include "puedejubilarse.h"
#include "positivonegativo.h"

PuedeJubilarse jubilacion;
PositivoNegativo positivoNegativo;

int main() {
    int option;

    do {
        std::cout << "\n--- MENU DE EJERCICIOS ---" << std::endl;
        std::cout << "1. Numero positivo/negativo" << std::endl;
        std::cout << "2. Calculo de jubilacion" << std::endl;
        std::cout << "3. Salir" << std::endl;
        std::cout << "Elija una opcion: ";
        std::cin >> option;

        switch (option) {
            case 1:
                positivoNegativo.calcularSigno();
                break;
            case 2:
                jubilacion.calculo();
                break;
            case 3:
                std::cout << "Saliendo..." << std::endl;
                break;
            default:
                std::cout << "Opcion no valida." << std::endl;
        }
    } while (option != 3);

    return 0;
}
