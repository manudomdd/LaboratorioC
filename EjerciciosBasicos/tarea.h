#ifndef TAREA_H
#define TAREA_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Tarea {
    std::string nombre;
    int prioridad;

    Tarea();
    Tarea(std::string nombre, int prioridad);
};

class GestorTareas {
private:
    std::vector<Tarea> lista;

public:
    void agregarTarea();
    void mostrarTareas();
};

#endif
