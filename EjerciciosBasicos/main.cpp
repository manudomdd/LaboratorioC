#include <iostream>
#include "puedejubilarse.h"
#include "positivonegativo.h"
#include "calculararea.h"
#include "contador1_100.h"
#include "analisistemperaturas.h"
#include "calificaciones.h"
#include "tarea.h"


int main() {
    PuedeJubilarse jubilacion;
    PositivoNegativo positivoNegativo;
    CalcularArea calcularArea;
    Contador1_100 contador;
    AnalisisTemperaturas analisisTemperaturas;
    Calificaciones calificaciones;
    GestorTareas gestor;

    int option;

    do {
        std::cout << "\n--- MENU DE EJERCICIOS ---" << std::endl;
        std::cout << "1. Numero positivo/negativo" << std::endl;
        std::cout << "2. Calculo de jubilacion" << std::endl;
        std::cout << "3. Calculo de areas" << std::endl;
        std::cout << "4. Contar del 1 al 100" << std::endl;
        std::cout << "5. Temperaturas" << std::endl;
        std::cout << "6. Mostrar calificaciones" << std::endl;
        std::cout << "7. Tareas." << std::endl;
        std::cout << "8. Salir" << std::endl;
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
                int election;
                std::cout <<"Elige opcion: "<<std::endl;
                std::cout<<"1. Introducir notas."<<std::endl;
                std::cout<<"2. Mostrar numero alumnos"<<std::endl;
                std::cout<<"3. Mostrar promedio calificaciones"<<std::endl;
                std::cin >> election;
                if (election == 1) {
                    calificaciones.introducirNotas();
                } else if (election == 2) {
                    calificaciones.numeroAlumnos();
                } else if (election == 3) {
                    calificaciones.calcularPromedio();
                } else {
                    std::cout<<"Opcion no valida"<<std::endl;
                }
                break;
            case 7:
                int eleccion;
                do {
                    std::cout<<"Elige opcion"<<std::endl;
                    std::cout<<"1. Añadir tarea"<<std::endl;
                    std::cout<<"2. Mostrar tareas"<<std::endl;
                    std::cout<<"3. Volver al menu"<<std::endl;
                    std::cin>>eleccion;
                    if (eleccion == 1) {
                        gestor.agregarTarea();
                    } else if (eleccion == 2) {
                        gestor.mostrarTareas();
                    }
                } while (eleccion != 3);
                break;
            case 8:
                std::cout << "Saliendo..." << std::endl;
                break;
            default:
                std::cout << "Opcion no valida." << std::endl;
        }
    } while (option != 7);

    return 0;
}
