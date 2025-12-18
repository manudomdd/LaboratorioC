#include "analisistemperaturas.h"
#include <iostream>
#include "vector"
#include "algorithm"

AnalisisTemperaturas::AnalisisTemperaturas() {}
    std::vector<double> temperaturas;

    void AnalisisTemperaturas::introducir() {
        double election;
        while (true) {
            std::cout << "Introduzca una temperatura (0 para salir): " << std::endl;
            std::cin >> election;
            if (election == 0) {
                break;
            }
            temperaturas.push_back(election);
        }

        std::cout << "Las temperaturas introducidas son: " << std::endl;
        for (int i = 0; i < temperaturas.size(); i++) {
            std::cout << "Temperatura "  <<i<< ":" << temperaturas[i] <<std::endl;
        }
    }

    void AnalisisTemperaturas::calcularMaxima() {
        if (temperaturas.empty()) {
            std::cout << "No existen registros" << std::endl;
        } else {
            std::sort(temperaturas.begin(), temperaturas.end());
            double tempMax = temperaturas[temperaturas.size() - 1];
            std::cout << "La temperatura máxima es de: " << tempMax << std::endl;
        }
    }

    void AnalisisTemperaturas::calcularMinima() {
        if (temperaturas.empty()) {
            std::cout << "No hay registros" << std::endl;
        } else {
            std::sort(temperaturas.begin(), temperaturas.end());
            double tempMin = temperaturas[0];
            std::cout << "La temperatura mínima es de: " << tempMin << std::endl;
        }
    }
