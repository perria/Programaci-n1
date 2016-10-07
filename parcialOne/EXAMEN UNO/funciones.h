#include <stdio.h>
#include <stdlib.h>

#define OCUPADO 1
#define VACIO 0
#define BAJA 2

struct pelicula{

    int idPelicula, idDirector, idNacionalidad;
    char titulo[255];
    char idEstado;

};

struct director{

    int idDirector, idNacionalidad;
    char nombre[50];
    char idEstado;
    int cantidad;
};

struct estado{

    char idEstado;
    char descripcion[50];
};

struct nacionalidad{

    int idNacionalidad;
    char idEstado;
    char descripcion[50];
};

void inicioPeli(struct pelicula peli[]);
void inicioDire(struct director direc[]);
void inicioNacionalidad(struct nacionalidad nacion[]);
void mostrarVectorcitoDePelis(struct pelicula peli[]);
int directoresMuchasPelis(struct director direc[],struct pelicula peli[]);
