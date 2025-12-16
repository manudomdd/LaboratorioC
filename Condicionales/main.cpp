#include <iostream>

using namespace std;

int main() {
    int vidas = 3;

    // Esto es igual que en Java
    if (vidas > 0) {
        cout << "Estas vivo!" << endl;
    }

    // --- LA MAGIA DE C++ ---
    // En Java esto da error: if (vidas)
    // En C++ esto es valido:

    int balas = 5;
    if (balas) { // C++ interpreta: ¿Es balas distinto de 0?
        cout << "Tienes municion (True)" << endl;
    }

    int dinero = 0;
    if (dinero) {
        cout << "Eres rico";
    } else {
        cout << "No tienes dinero (False, porque es 0)" << endl;
    }

    return 0;
}
