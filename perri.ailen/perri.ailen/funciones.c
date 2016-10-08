#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
#define CANT 3
#define VACIO 0
#define OCUPADO 1



/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}

/**
 * \brief Inicializa el status en un array de productos
 * \param productArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \param value Es el valor que se asignara a estatus
 * \return -
 *
 */
void setStatus(Cliente personas[])
{
    int i;
    for(i=0; i < CANT; i++)
    {
        personas[i].estadoCliente = VACIO;
    }
}

int menuOpciones(char texto[], char opcion[])
{
    int auxOpcion;
    auxOpcion=atoi(opcion);
    if(auxOpcion<1||auxOpcion>7)
    {
        system("cls");
        printf("La opcion debe ser un num entre 1 y 7/n Por favor, vuelva a Ingresar la opcion.");
        return 0;
    }
    else
    {
        return auxOpcion;
    }
}




void cargarDatos(Cliente personas[])
{

    int i;
    Cliente datos;

    for(i=0; i<CANT; i++)
    {
        if(personas[i].estadoCliente==VACIO)
        {
            Cliente datos;
            printf("Ingrese nombre\n");
            fflush(stdin);
            gets(personas[i].nombreCliente);

            printf("Ingrese apellido\n");
            fflush(stdin);
            gets(personas[i].apellidoCliente);

            printf("Ingrese dni\n");
            fflush(stdin);
            scanf("%d",&personas[i].dniCliente);

            personas[i].estadoCliente=OCUPADO;

            for(i=0; i<CANT; i++)
            {
                if(personas[i].estadoCliente==OCUPADO)
                {
                    printf("\nNombre:\n%s\n\nApellido:\n%s\n\nDni:\n%d\n",personas[i].nombreCliente,personas[i].apellidoCliente,personas[i].dniCliente);
                }

            }
            return personas;

        }



        /**
        * \brief Busca el primer lugar no utilizado en el array
        * \param productArray Es el array en el cual buscar
        * \param arrayLenght Indica la logitud del array
        * \return Si no hay lugares libres (-1) y si la hay la posicion del mismo (i)
        *
        */
        int findEmptyPlace(Cliente personas[])
        {
            int i;
            for(i=0; i < CANT; i++)
            {
                if(personas[i].estadoCliente == 0)
                {
                    return i;
                }
            }
            return -1;
        }

        /**
         * \brief Solicita un texto numérico al usuario y lo devuelve
         * \param mensaje Es el mensaje a ser mostrado
         * \param input Array donde se cargará el texto ingresado
         * \return 1 si el texto contiene solo números
         */
        int getStringNumeros(char mensaje[],char input[])
        {
            char aux[256];
            getString(mensaje,aux);
            if(esNumerico(aux))
            {
                strcpy(input,aux);
                return 1;
            }
            return 0;
        }


        /**
         * \brief Busca la primer ocurrencia de un producto mediante su codigo
         * \param productArray Es el array en el cual buscar
         * \param arrayLenght Indica la logitud del array
         * \param code Es el valor que se busca
         * \return Si no hay ocurrencia (-1) y si la hay la posicion de la misma (i)
         *
         */
        int findProductByCode(Cliente personas[],int idDelCLiente)
        {
            int i;
            int idDelCli;
            for(i=0; i < CANT; i++)
            {
                if(personas[i].idDelCliente == idDelCli&& personas[i].estadoCliente == 1)
                {
                    return i;
                }
            }
            return -1;
        }



        /** \brief borra el dato que usuario quiere, buscandolo con el dni
         *
         * \param id, i
         * \param estructura
         *
         */

        void baja(Cliente personas[])
        {

            int id;
            int i;

            printf("Ingrese el id del cliente a dar de baja:\n");
            fflush(stdin);
            scanf("%d",&id);

            for(i=0; i<20; i++)
            {
                if(id==personas[i].idDelCliente)
                {
                    personas[i].estadoCliente=VACIO;
                    break;
                }

            }
        }

    }

        /** \brief
         *
         * \param
         * \param
         * \return
         *
         */



    char modificar(Cliente persona[])
        {

            int numId;
            Cliente nom;
            printf("Introduzca id: ");
            scanf("&d", numId);

            for(i = 0; i < CANT; i++)
            {
                if (strcmp(personas[i].nombreCliente,nom.nombreCliente)==0)
                {
                    printf("Introduzca nombre: ");
                    scanf("%f",&personas[i].nombreCliente);
                    printf("Introduzca un stock: ");
                    scanf("%f",&personas[i].apellidoCliente);
                    printf("\nProducto modificado.");
                }
            }

        }

}




