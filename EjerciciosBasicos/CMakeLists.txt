cmake_minimum_required(VERSION 3.5)

project(Ejercicios LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Ejercicios
    main.cpp
    puedejubilarse.cpp  # Si lo pusiste en carpeta, pon la ruta
    puedejubilarse.h
    positivonegativo.cpp
    positivonegativo.h
    calculararea.cpp
    calculararea.h
    contador1_100.cpp
    contador1_100.h
    analisistemperaturas.cpp
    analisistemperaturas.h
    calificaciones.cpp
    calificaciones.h
    tarea.cpp
    tarea.h

)
