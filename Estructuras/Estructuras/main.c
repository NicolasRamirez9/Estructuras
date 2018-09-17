#include <stdio.h>
#include <stdlib.h>
#define A 3

int main()
{
    eAlumno listadoMain[A];
    cargarListadoDeAlumnos(listadoMain, A);
    mostrarListadoDeAlumnos(listadoMain, A);
    ordenarNombres(listadoMain, A);
}


    int i;
    for(i=0; i<A; i++)
    {
        miAlumnoMain[i] = cargarAlumno();
    }

    int i;
    for(i=0; i<A; i++)
    {
        mostrarUnAlumno(listadoMain[i]);
    }

