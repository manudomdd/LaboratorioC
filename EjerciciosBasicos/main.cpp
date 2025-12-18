#include <iostream>
#include "puedejubilarse.h"
#include "positivonegativo.h"
#include "calculararea.h"
#include "contador1_100.h"
#include "analisistemperaturas.h"

int main() {
    PuedeJubilarse jubilacion;
    PositivoNegativo positivoNegativo;
    CalcularArea calcularArea;
    Contador1_100 contador;
    AnalisisTemperaturas analisisTemperaturas;
    int option;

    do {
        std::cout << "\n--- MENU DE EJERCICIOS ---" << std::endl;
        std::cout << "1. Numero positivo/negativo" << std::endl;
        std::cout << "2. Calculo de jubilacion" << std::endl;
        std::cout << "3. Calculo de areas" << std::endl;
        std::cout << "4. Contar del 1 al 100" << std::endl;
        std::cout << "5. Temperaturas" << std::endl;
        std::cout << "6. Salir" << std::endl;
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
            case 5: {
                int election;
                std::cout << "Elige opcion: " << std::endl;
                std::cout << "1. Introducir." << std::endl;
                std::cout << "2. Mostrar maxima" << std::endl;
                std::cout << "3. Mostrar minima" << std::endl;
                std::cin >> election;
                if (election == 1) {
                    analisisTemperaturas.introducir();
                } else if (election == 2) {
                    analisisTemperaturas.calcularMaxima();
                } else if (election == 3) {
                    analisisTemperaturas.calcularMinima();
                }
                break;
            }
            case 6:
                std::cout << "Saliendo..." << std::endl;
                break;
            default:
                std::cout << "Opcion no valida." << std::endl;
        }
    } while (option != 6);

    return 0;
}
