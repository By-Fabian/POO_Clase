//
// Created by utec on 23/10/19.
//

#include "include.h"
#include "alumno.h"
#include "seccion.h"


Clase_SeccionAlumnos::Clase_SeccionAlumnos(size_t construct_numero_alumnos):
    cantidad(construct_numero_alumnos)
{
    lista_alumnos = new Clase_Alumno[cantidad];
    cout<<__PRETTY_FUNCTION__<<endl;
}

Clase_SeccionAlumnos::Clase_SeccionAlumnos(Clase_SeccionAlumnos &seccion)
{
    cantidad = seccion.cantidad;
    lista_alumnos=new Clase_Alumno[cantidad];
    for(int i=0; i < cantidad;++i){
        lista_alumnos[i]=seccion.lista_alumnos[i];
    }
    cout<<__PRETTY_FUNCTION__<<endl;
}

void Clase_SeccionAlumnos::set_alumnos(size_t indice, const Clase_Alumno& alumno)
{
    lista_alumnos[indice]=alumno;
    cout<<__PRETTY_FUNCTION__<<endl;
}

void Clase_SeccionAlumnos::imprimir_lista() {
    for (int i = 0; i < cantidad; ++i) {
        cout<<lista_alumnos[i].GetApellido();
        cout<<lista_alumnos[i].GetEdad();
        cout<<lista_alumnos[i].GetNombre();
    }
    cout<<__PRETTY_FUNCTION__<<endl;
}

Clase_SeccionAlumnos::~Clase_SeccionAlumnos() {

}
