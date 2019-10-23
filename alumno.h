//
// Created by utec on 23/10/19.
//

#ifndef EJERCICIO1_ALUMNO_H
#define EJERCICIO1_ALUMNO_H

#include "include.h"

#endif //EJERCICIO1_ALUMNO_H

class Clase_Alumno {
private:
    palabra pr_nombre;
    palabra pr_apellido;
    numero pr_edad;
public:
    Clase_Alumno();
    Clase_Alumno(string nombre,string apellido,numero edad);
    Clase_Alumno(Clase_Alumno& alumno);
    palabra GetNombre();
    palabra GetApellido();
    numero GetEdad();
    };
