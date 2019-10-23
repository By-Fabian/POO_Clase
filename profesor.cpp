//
// Created by utec on 23/10/19.
//
#include "include.h"
#include "profesor.h"


Clase_Profesor::Clase_Profesor():pr_nombre(),pr_apellido(),pr_edad() {
    cout<<__PRETTY_FUNCTION__<<endl;

}

Clase_Profesor::Clase_Profesor(palabra construct_nombre, palabra construct_apellido, numero construct_edad):
pr_nombre(construct_nombre),pr_apellido(construct_apellido),pr_edad(construct_edad)
{
cout<<__PRETTY_FUNCTION__<<endl;
}

Clase_Profesor::Clase_Profesor(Clase_Profesor &profesor) {
    cout<<__PRETTY_FUNCTION__<<endl;
    pr_nombre = profesor.pr_nombre;
    pr_apellido=profesor.pr_apellido;
    pr_edad=profesor.pr_edad;

}

palabra Clase_Profesor::GetNombre() {
    return pr_nombre;
}

palabra Clase_Profesor::GetApellido() {
    return pr_apellido;
}

numero Clase_Profesor::GetEdad() {
    return pr_edad;
}
