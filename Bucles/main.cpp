#include <iostream>
#include <vector> // NECESARIO para usar vectores

using namespace std;

int main() {
    // --- 1. ARRAY CLASICO (ESTILO C) ---
    // Inconveniente: El tamaño (5) es fijo. No puedo meter un sexto numero.
    int numerosFijos[5] = {10, 20, 30, 40, 50};

    cout << "=== ARRAY CLASICO ===" << endl;
    // Bucle for clasico
    for (int i = 0; i < 5; i++) {
        cout << "Posicion " << i << ": " << numerosFijos[i] << endl;
    }

    // --- 2. VECTOR (C++ MODERNO) ---
    // Ventaja: Nace vacio y crece.
    // Equivalente Java: ArrayList<Integer> lista = new ArrayList<>();
    vector<int> listaDinamica;

    // Añadimos datos "empujandolos" al final
    listaDinamica.push_back(100);
    listaDinamica.push_back(200);
    listaDinamica.push_back(300);

    cout << "\n=== VECTOR DINAMICO ===" << endl;
    cout << "Tamano actual: " << listaDinamica.size() << endl;

    // Bucle "For-Each" (Rango).
    // Esto es C++ moderno (C++11). Muy similar al "for (int n : lista)" de Java
    for (int numero : listaDinamica) {
        cout << "Valor: " << numero << endl;
    }

    return 0;
}
