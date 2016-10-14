#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "funciones.c"

int main()
{
    char seguir='s';
    int opcion=0;
    cliente clientes[MAX_CLIENTES];
	alquiler alquileres[MAX_ALQUILERES];

    while(seguir=='s')
    {
        printf("\n1- Dar de alta un cliente\n");
        printf("2- Modificar cliente\n");
        printf("3- Baja cliente\n");
        printf("4- Nuevo alquiler\n");
        printf("5- Fin alquiler\n");
        printf("6- Informar\n");
        printf("7- Salir\n");
        fflush(stdin);
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            alta_cliente(clientes);
            break;
        case 2:
            modificacion(clientes);
            break;
        case 3:
            baja(clientes);
            break;
        case 4:
            nuevo_alquiler(alquileres);
            break;
        case 5:
            fin_de_alquiler(alquileres);
            break;
        case 6:
            cliente_con_mas_Alquileres(clientes);
            equipo_mas_alquilado(alquileres);
            promedio_tiempo_real(alquileres);
            break;
        case 7:
            seguir = 'n';
            break;
        }
    }

    return 0;
}
