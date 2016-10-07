#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define OCUPADO 1
#define VACIO 0
#define BAJA 2

int main()
{
    struct pelicula peli[10];
    struct director direc[4];
    struct nacionalidad nacion[3];
    struct estado est[3];

    inicioPeli(peli);
    inicioDire(direc);
    inicioNacionalidad(nacion);

    strcpy(peli[0].titulo,"Pabellon 8");
    peli[0].idPelicula=15;
    peli[0].idDirector=23;
    peli[0].idNacionalidad=55;
    peli[0].idEstado=OCUPADO;

    strcpy(peli[1].titulo,"Super Patrulla Delta");
    peli[1].idPelicula=12;
    peli[1].idDirector=23;
    peli[1].idNacionalidad=54;
    peli[1].idEstado=OCUPADO;

    strcpy(peli[2].titulo,"Vuelo ezeiza retiro");
    peli[2].idPelicula=23;
    peli[2].idDirector=2;
    peli[2].idNacionalidad=55;
    peli[2].idEstado=OCUPADO;

    strcpy(direc[0].nombre, "Ezequiel Cristian Crack");
    direc[0].idDirector=23;
    direc[0].idNacionalidad=55;
    direc[0].idEstado=OCUPADO;

    strcpy(direc[1].nombre, "Ailen trolita");
    direc[1].idDirector=2;
    direc[1].idNacionalidad=55;
    direc[1].idEstado=OCUPADO;

    strcpy(nacion[0].descripcion, "Argentina");
    nacion[0].idNacionalidad=55;
    nacion[0].idEstado=OCUPADO;

    directoresMuchasPelis(direc,peli);

    //mostrarVectorcitoDePelis(peli);

    return 0;
}

