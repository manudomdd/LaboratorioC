#include <iostream>
#include "puedejubilarse.h"
#include "positivonegativo.h"
#include "calculararea.h"

PuedeJubilarse jubilacion;
PositivoNegativo positivoNegativo;
CalcularArea calcularArea;

int main() {
    int option;

    do {
        std::cout << "\n--- MENU DE EJERCICIOS ---" << std::endl;
        std::cout << "1. Numero positivo/negativo" << std::endl;
        std::cout << "2. Calculo de jubilacion" << std::endl;
        std::cout << "3. Calculo de areas" << std::endl;
        std::cout << "4. Salir" << std::endl;
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
                calcularArea.calculoArea();
                break;
            case 4:
                std::cout << "Saliendo..." << std::endl;
                break;
            default:
                std::cout << "Opcion no valida." << std::endl;
        }
    } while (option != 3);

    return 0;
}
