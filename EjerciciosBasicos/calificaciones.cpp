#include "calificaciones.h"
#include <iostream>
#include "vector"


Calificaciones::Calificaciones() {}

    std::vector<double> calificaciones;

    void Calificaciones::introducirNotas() {
        double selection = 0;
        do {
            std::cout<<"Introduzca una nota (-1 para salir): "<<std::endl;
            std::cin>>selection;
            calificaciones.push_back(selection);
        } while (selection != -1);
    }

    void Calificaciones::mostrarNotas() {
        if (calificaciones.empty()) {
            std::cout<<"No hay ninguna calificación para mostrar aún."<<std::endl;
            return;
        } else {
            for (double c : calificaciones) {
                std::cout<<"Calificacion: "<<c<<std::endl;
            }
        }
    }

    void Calificaciones::numeroAlumnos() {
        int numAlumnos;
        if (calificaciones.empty()) {
            std::cout<<"No hay ningun alumno en clase."<<std::endl;
            return;
        } else {
            numAlumnos = calificaciones.size();
            std::cout<<"Numero de alumnos: "<<numAlumnos<<std::endl;
        }
    }

    void Calificaciones::calcularPromedio() {
        int numAlumnos = calificaciones.size();
        double suma = 0;
        double promedio;
        for (double c : calificaciones) {
            suma+=c;
        }

        promedio = suma / numAlumnos;

        std::cout<<"El promedio de calificaciones es de: "<<promedio<<std::endl;
    }



