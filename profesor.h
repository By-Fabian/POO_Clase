//
// Created by utec on 23/10/19.
//

#ifndef EJERCICIO1_PROFESOR_H
#define EJERCICIO1_PROFESOR_H

#include "include.h"

#endif //EJERCICIO1_PROFESOR_H

class Clase_Profesor {
private:
    palabra pr_nombre;
    palabra pr_apellido;
    numero pr_edad;
public:
    Clase_Profesor();
    Clase_Profesor(string nombre,string apellido,numero edad);
    Clase_Profesor(Clase_Profesor& profesor);
    palabra GetNombre();
    palabra GetApellido();
    numero GetEdad();
};

//CTRL+SHIFT+D

