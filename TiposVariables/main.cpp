/**
 * Incluimos librerias de entrada y salida de texto
 */
#include <iostream>

/**
 *Opcional si nos queremos quitar de usar std, no es necesario.
 */
using namespace std;

void mostrarEntero()  {
    std::cout << "\n ----- Prueba de enteros-----" << std::endl;

    /**
     * @brief numeroEntero
     * En C++ podemos tener el control del signo de los enteros.
     */
    int numeroEntero = -4;
    unsigned int numeroEntero2 = 4344;

    /**
     * En C++ no "concatenamos" para imprimir, sino que encadenamos flujos de datos usando << (las flechitas). Imagina que estás empujando vagones a un tren.
     */
    std::cout << "Numero 1: " << numeroEntero << "\nNumero 2: " << numeroEntero2 << std::endl;

    /*
     * En C++ tambien podemos saber cuanto espacio ocupa una variable en memoria
     */

    int bytes1 = sizeof (numeroEntero);
    int bytes2 = sizeof (numeroEntero2);

    std::cout << "El numero 1 ocupa " << bytes1 << " bytes" << std::endl;
    std::cout << "El numero 2 ocupa " << bytes2 << " bytes" << std::endl;

    /**
     * Da igual lo grande o pequeño que sea el entero siempre ocupa lo mismo, al igual con el resto de variables.
     */
}

void mostrarCadenas() {
    string saludo = "Hola";
    std::cout << "\n ----- Prueba de Strings -----" << std::endl;

    /**
     * En C++ podemos saber la direccion de memoria en la que se almacena cada
     * variable utilizando el &variable delante de cada variable.
     */
    std::cout << "Direccion de memoria inicial: " << &saludo << std::endl;
    saludo += " mundo";

    /**
     * Esto en java no podría hacerse porque se sobreescribe la cadena. Sin embargo,
     * en C++ las cadenas son mutables.
     */
    std::cout << "Texto modificado: " << saludo << std::endl;
    std::cout << "Direccion de memoria final:  " << &saludo << std::endl;
    std::cout << "Candena final: " << saludo << std::endl;
 }

void mostrarBooleanos() {
    bool esLinux = true;
    std::cout << "\n--- Prueba de Bool ---" << std::endl;
    // En C++, true se imprime como 1 y false como 0 por defecto
    std:: cout << "Es Linux? " << esLinux << std::endl;
    // Un truco para que imprima "true" o "false"
    std::cout << "Es Linux (con boolalpha)? " << boolalpha << esLinux << std::endl;
}

int main()
{
    mostrarEntero();
    mostrarCadenas();
    return 0;
}
