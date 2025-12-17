#include "contador1_100.h"
#include <iostream>

Contador1_100::Contador1_100() {}

void Contador1_100::contar() {
    for (int i = 1; i <= 100; i++) {
        std::cout << "Numero: " <<i<< std::endl;
    }
}
