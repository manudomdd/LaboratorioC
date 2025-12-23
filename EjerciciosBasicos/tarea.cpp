#include "tarea.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//AQUI ES DONDE REALMENTE SE IMPLEMENTAN LOS CONSTRUCTORES. EN EL .H SOLO SE DECLARAN.
Tarea::Tarea() {}
Tarea::Tarea(std::string nombre, int prioridad) {
    this->nombre = nombre;
    this->prioridad = prioridad;
}

bool comparaTareas(const Tarea &a, const Tarea &b) {
    return a.prioridad > b.prioridad;
}

void GestorTareas::agregarTarea() {
    std::string nombre;
    int prioridad;

    std::cout<<"Introduzca el nombre de la tarea: "<<std::endl;
    std::cin>>nombre;
    std::cout<<"Introduzca la prioridad: "<<std::endl;
    std::cin>>prioridad;

    //asi se declaran los constructores, sin el new.
    Tarea t(nombre, prioridad);
    //se accede a la lista del gestor de tareas.
    lista.push_back(t);
    std::cout << "--- Tarea añadida ---" << std::endl;
}

void GestorTareas::mostrarTareas() {
    if (lista.empty()) {
        std::cout<<"No hay tareas."<<std::endl;
        return;
    } else {
        std::sort(lista.begin(), lista.end(), comparaTareas);
        for (Tarea t : lista) {
            std::string nombre = t.nombre;
            int prioridad = t.prioridad;
            std::cout<<"Nombre tarea: "<<nombre<<" Prioridad: "<<prioridad<<std::endl;
        }
    }
}


