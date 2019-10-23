//
// Created by utec on 23/10/19.
//
#include "include.h"

#include "alumno.h"


Clase_Alumno::Clase_Alumno():pr_nombre(),pr_apellido(),pr_edad() {
    cout<<__PRETTY_FUNCTION__<<endl;
}

Clase_Alumno::Clase_Alumno(string construct_nombre, string construct_apellido, numero construct_edad):
pr_nombre(construct_nombre),pr_apellido(construct_apellido),pr_edad(construct_edad)
{
cout<<__PRETTY_FUNCTION__<<endl;
}

Clase_Alumno::Clase_Alumno(Clase_Alumno &alumno) {
    cout<<__PRETTY_FUNCTION__<<endl;
    pr_nombre = alumno.pr_nombre;
    pr_apellido=alumno.pr_apellido;
    pr_edad=alumno.pr_edad;

}

palabra Clase_Alumno::GetNombre() {
    return pr_nombre;
}

palabra Clase_Alumno::GetApellido() {
    return pr_apellido;
}

numero Clase_Alumno::GetEdad() {
    return pr_edad;
}


