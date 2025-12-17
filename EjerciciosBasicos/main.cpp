#include <iostream>
#include "puedejubilarse.h"
#include "positivonegativo.h"
#include "calculararea.h"
#include "contador1_100.h"

PuedeJubilarse jubilacion;
PositivoNegativo positivoNegativo;
CalcularArea calcularArea;
Contador1_100 contador;

int main() {
    int option;

    do {
        std::cout << "\n--- MENU DE EJERCICIOS ---" << std::endl;
        std::cout << "1. Numero positivo/negativo" << std::endl;
        std::cout << "2. Calculo de jubilacion" << std::endl;
        std::cout << "3. Calculo de areas" << std::endl;
        std::cout << "4. Contar del 1 al 100" << std::endl;
        std::cout << "5. Salir" << std::endl;
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
                contador.contar();
                break;
            case 5:
                std::cout << "Saliendo..." << std::endl;
                break;
            default:
                std::cout << "Opcion no valida." << std::endl;
        }
    } while (option != 5);

    return 0;
}
