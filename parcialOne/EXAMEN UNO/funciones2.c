#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define OCUPADO 1
#define VACIO 0
#define BAJA 2

void inicioPeli(struct pelicula peli[])
{
    int i;

    for(i=0; i<10; i++)
    {
        peli[i].idEstado = VACIO;
    }
}

void inicioDire(struct director direc[])
{
    int i;

    for(i=0; i<3; i++)
    {
        direc[i].idEstado = VACIO;
        direc[i].cantidad = VACIO;
    }
}
void inicioNacionalidad(struct nacionalidad nacion[])
{    int i;

    for(i=0; i<4; i++)
    {
        nacion[i].idEstado = VACIO;
    }

}

void mostrarVectorcitoDePelis(struct pelicula peli[]){
    int i;
    for (i=0; i<10; i++){
        printf("El vector es: %d\n",peli[i].idEstado);
    }
}

int directoresMuchasPelis(struct director direc[],struct pelicula peli[]){
    int i,j,pelis;
    pelis=0;
    int aux=0;
    int d=0;

    for(i=0;i<4;i++)
    {
        for(j=0;j<10;j++) //recorre peliculas
        {
            if(direc[i].idDirector == peli[j].idDirector)
            {
                direc[i].cantidad++;
            }

        }

        if(direc[i].idEstado == OCUPADO && direc[i].cantidad > aux)
        {
            aux = direc[i].cantidad;
            d = i;
        }

    }

    printf("El director mas putita es: %s y tiene %d peliculas\n",direc[d].nombre, aux);

}

