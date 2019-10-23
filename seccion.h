//
// Created by utec on 23/10/19.
//
#include "include.h"
#include "alumno.h"

#ifndef EJERCICIO1_SECCION_H
#define EJERCICIO1_SECCION_H

#endif //EJERCICIO1_SECCION_H

class Clase_SeccionAlumnos{
private:
    Clase_Alumno* lista_alumnos;
    size_t cantidad;
public:
    Clase_SeccionAlumnos (size_t numero_alumnos);
    Clase_SeccionAlumnos(Clase_SeccionAlumnos& seccion);
    void set_alumnos(size_t indice,const Clase_Alumno& alumno);
    void imprimir_lista();
    ~Clase_SeccionAlumnos();
};