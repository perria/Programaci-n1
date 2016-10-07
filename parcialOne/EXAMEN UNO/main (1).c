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

void inicioPeli(struct pelicula peli[]);
void inicioDire(struct director direc[]);
void inicioNacionalidad(struct nacionalidad nacion[]);
void mostrarVectorcitoDePelis(struct pelicula peli[]);

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

    strcpy(direc[0].nombre, "Ezequiel Cristian Crack");
    direc[0].idDirector=23;
    direc[0].idNacionalidad=55;
    direc[0].idEstado=OCUPADO;

    strcpy(nacion[0].descripcion, "Argentina");
    nacion[0].idNacionalidad=55;
    nacion[0].idEstado=OCUPADO;

    mostrarVectorcitoDePelis(peli);

    /*strcpy(est[0].descripcion, "Ocupadito");
    est[0].idEstado=OCUPADO;*/


    //printf(nacion[0].descripcion);

    return 0;
}

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

