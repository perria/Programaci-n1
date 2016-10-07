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

void inicio(int);

int main()
{
    pelicula peli[5];
    director direc[5];
    nacionalidad nacion[5];
    estado est[5];



    strcpy(peli[0].titulo,"Pabellon 8");
    peli[0].idPelicula=15;
    peli[0].idDirector=230;
    peli[0].idNacionalidad=55;
    peli[0].idEstado=OCUPADO;

    strcpy(direc[0].nombre, "Ezequiel Cristian Crack");
    direc[0].idDirector=230;
    direc[0].idNacionalidad=55;
    direc[0].idEstado=OCUPADO;

    strcpy(nacion[0].descripcion, "Argentina");
    nacion[0].idNacionalidad=55;
    nacion[0].idEstado=OCUPADO;

    strcpy(est[0].descripcion, "Ocupadito");
    est[0].idEstado=OCUPADO;

    printf(nacion[0].descripcion);

    return 0;
}

void inicio(pelicula peli[], int estado)  // poner las demas estructuras cuando llamas a la funcion dejas las estructuras igual y a int estado le pones vacio

{
    int i;

    // inicializar las estructuras a 0

    for(i=0, i<5, i++)
    {
        peli[i].idEstado = estado;
    }
}
