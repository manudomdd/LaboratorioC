#include "analisistemperaturas.h"
#include <iostream>
#include "vector"
#include "algorithm"

AnalisisTemperaturas::AnalisisTemperaturas() {}
    std::vector<double> temperaturas;

    void AnalisisTemperaturas::introducir() {
        double election;
        do {
            std::cout << "Introduzca una temperatura (0 para salir): " << std::endl;
            std::cin >> election;
            temperaturas.push_back(election);
        } while (election != 0);

        std::cout << "Las temperaturas introducidas son: " << std::endl;

        for (int i = 0; i < temperaturas.size(); i++) {
            std::cout << "Temperatura "  <<i<< ":" << temperaturas[i] <<std::endl;
        }
    }

    void AnalisisTemperaturas::calcularMaxima() {
        std::sort(temperaturas.end(), temperaturas.begin());
        double tempMax = temperaturas[0];
        std::cout << "La temperatura máxima es de: " << tempMax << std::endl;
    }

    void AnalisisTemperaturas::calcularMinima() {
        std::sort(temperaturas.begin(), temperaturas.end());
        double tempMin = temperaturas[0];
        std::cout << "La temperatura mínima es de: " << tempMin << std::endl;
    }
