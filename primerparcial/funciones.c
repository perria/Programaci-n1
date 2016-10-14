/*#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
#define MOLADORA 0
#define MEZCLADORA 1
#define TALADRO 2
#define OCUPADO 1
#define VACIO 0
#define CANT 3

void alta(void)
{
    int id[CANT], dni[CANT], i;
    char nombre[15], apellido[20];

    for(i=0; i<CANT; i++)
    {
        printf("Ingrese nombre\n");
        fflush(stdin);
        gets(inicio[i].nombreC);

        printf("Ingrese apellido\n");
        fflush(stdin);
        gets(inicio[i].apellidoC);

        printf("Ingrese dni\n");
        fflush(stdin);
        scanf("%d",&inicio[i].dniC);

        inicio[i].estadoC=OCUPADO;
    }

}







//nuevo alquiler


int nuevoAlquiler(struct Cliente client[].idC)
{
    int select=0;
    int cont0=0, cont1=0, cont2=0;
    struct NuevoAlquiler aux;

    printf("0 - moladora ; 1 - mezcladora ; 2 - taladro\n");
    scanf("%d",&select);

    while(select==1;select==2;select==0)
    {
        if(select==0)
        {
        printf("Cuanto tiempo desea alquilar la moladora?\n");
        scanf("%d",&aux[i].tiempoEAl);
        cont0++;
        }else if(select==1)
            {
                printf("Cuanto tiempo desea alquilar la mezcladora el id %d\n",Cliente.idC);
                scanf("%d",&aux.tiempoEAl);
                cont1++;
            }else if(select==2)
            {
                printf("Cuanto tiempo desea alquilar la mezcladora el id %d\n",Cliente.idC);
                scanf("%d",&aux.tiempoEAl);
                cont2++;
            }
    }

    printf("Digame su operador\n");
    scanf("%d",aux.operadorAl);
    return OCUPADO;
}


//FIN ALQUILER

int finAlquiler(void)
{
    int n;
    printf("Cuanto tiempo uso el equipo?\n");
    scanf("%d",&n);
    return VACIO;
}


//INFORMES



int clienteMasAlquileres(struct Clientes client[],struct NuevoAlquiler alquiler[])
{
    int i,j,pelis;
    pelis=0;
    int aux=0;
    int d=0;

    for(i=0;i<CANT;i++)
    {
        for(j=0;j<CANT;j++) //recorre alquileres
        {
            if(client[i].idC == alquiler[j].idC)
            {
                client[i].cantidad++;
            }

        }

        if(client[i].estadoC == OCUPADO && client[i].cantidad > aux)
        {
            aux = client[i].cantidad;
            d = i;
        }

    }

    printf("El cliente con mas alquileres es: %s %s y tiene %d alquileres\n",client[d].nombreC, client[d].apellidoC, aux);

}


int equiposMasAlquilados(struct NuevoAlquiler alquiler[])
{
    int i, aux;
    int cont2=0, cont0=0, cont1=0;
  if(cont0>cont1 && cont0>cont2)
  {
      aux=alquiler[i].cont0;
  }else if(cont1>cont0 && cont1>cont2)
  {
      aux=alquiler[i].cont1;
  }else
  {
      aux=alquiler[i].cont2;
  }

  printf("El equipo mas alquilado es %d : y fue alquilado %d veces\n",alquiler, aux);
}
*/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float promedio_tiempo_real(alquiler *alquileres) {
	int i, cantidad = 0, tiempo_real_total = 0;
	for(i = 0 ; i < MAX_ALQUILERES ; i++) {
		if(alquileres[i].tiempo_real != 0) {
			cantidad++;
			tiempo_real_total += alquileres[i].tiempo_real;
		}
	}
	return tiempo_real_total / cantidad;
}

void ordenar(max_equipos *equipos, int cant_equipos) {
	int i, j;
	max_equipos *aux = malloc(sizeof(max_equipos));
	for(i = 1 ; i < cant_equipos ; i++) {
		for(j = 0 ; j < (cant_equipos - i) ; j++) {
			if(equipos[j].cantidad < equipos[j + 1].cantidad) {
				*aux = equipos[j];
				equipos[j] = equipos[j + 1];
				equipos[j + 1] = *aux;
			}
		}
	}
}

void obtener_el_o_los_maximos(max_equipos *equipos, int cant_equipos) {
	int i = 0;
	int max_cantidad = equipos[0].cantidad;

	while(equipos[i].cantidad == max_cantidad && i < 3) {
		printf("%d %d", equipos[i].equipo, equipos[i].cantidad);
		i++;
	}
}

void equipo_mas_alquilado(alquiler *alquileres) {
	int i;
	max_equipos equipos[3];
	for(i = 0 ; i < 3 ; i++) {
		equipos[i].equipo = i;
	}
	for(i = 0 ; i < MAX_ALQUILERES ; i++) {
		(equipos[alquileres[i].equipo].cantidad)++;
	}
	ordenar(equipos, 3);
	obtener_el_o_los_maximos(equipos, 3);

}

void cliente_con_mas_Alquileres(int pos_max, cliente *clientes) {
	printf("cliente con mas alquileres: %s %s", clientes[pos_max].nombre, clientes[pos_max].apellido);
}

int buscar_maxima_cantidad_de_alquiler(int *alquileres_por_cliente) {
	int i, max = 0, pos_max = 0;
	for(i = 0 ; i < MAX_CLIENTES ; i++) {
		if(alquileres_por_cliente[i] > max) {
			max = alquileres_por_cliente[i];
			pos_max = i;
		}
	}
	return pos_max;
}

void inicializar(int *alquileres_por_cliente) {
	int i;
	for(i = 0 ; i < MAX_CLIENTES ; i++) {
		alquileres_por_cliente[i] = 0;
	}
}

int *acumular_alquileres_por_cliente(alquiler *alquileres) {
	int *alquileres_por_cliente = malloc(MAX_CLIENTES * sizeof(int));
	inicializar(alquileres_por_cliente);
	int i;
	for(i = 0 ; i < MAX_ALQUILERES ; i++) {
		if(alquileres[i].alquilado) {
			alquileres_por_cliente[alquileres[i].ID_cliente - COMIENZO_IDE]++;
		}
	}
	return alquileres_por_cliente;
}

int buscar_alquiler(alquiler *alquileres, int id) {
	int i;
	for(i = 0 ; i < MAX_ALQUILERES ; i++) {
		if(alquileres[i].ID_cliente == id) break;
	}
	return i;
}

int buscar_posicion_alquiler(alquiler *alquileres) {
	int id_cliente;
	scanf("%d", &id_cliente);
	return buscar_alquiler(alquileres, id_cliente);
}

void fin_de_alquiler(alquiler *alquileres) {
	printf("Ingrese id del cliente y tiempo real de alquiler: ");
	int pos = buscar_posicion_alquiler(alquileres);
	alquileres[pos].alquilado = FINALIZADO;
	scanf("%d", &(alquileres[pos].tiempo_estimado));
}

void nuevo_alquiler(alquiler *alquileres) {
	int i = 0;
	while(i < MAX_ALQUILERES) {
		printf("ingresar ID cliente, equipo, tiempo estimado y operador: ");
		scanf("%d %d %d %d", &(alquileres[i].ID_cliente), &(alquileres[i].equipo), &(alquileres[i].tiempo_estimado), &(alquileres[i].operador));
		alquileres[i].alquilado = ALQUILADO;
		alquileres[i].tiempo_real = 0;
		i++;
	}
}

int buscar_id(cliente *clientes, int *id) {
	int i;
	for(i = 0 ; i < MAX_CLIENTES ; i++) {
		if(clientes[i].ID == *id) break;
	}
	return i;
}

int buscar_posicion_por_id(cliente *clientes) {
	int id_cliente;
	scanf("%d", &id_cliente);
	return buscar_id(clientes, &id_cliente);
}

void baja(cliente *clientes) {
	printf("Ingrese id del cliente para dar de baja: ");
	clientes[buscar_posicion_por_id(clientes)].habilitado = 0;
}

void modificacion(cliente *clientes) {
	printf("Ingrese id del cliente para modificar: ");
	int posicion = buscar_posicion_por_id(clientes);
	printf("Ingrese nuevo nombre y apellido: ");
	scanf("%s %s", clientes[posicion].nombre, clientes[posicion].apellido);
}

void alta_cliente(cliente *clientes) {
	int i = 0, ide = COMIENZO_IDE;
	while(i < MAX_CLIENTES) {
		printf("ingresar DNI, nombre y apellido: ");
		scanf("%ld %s %s", &(clientes[i].DNI), clientes[i].nombre, clientes[i].apellido);
		clientes[i].ID = ide++;
		clientes[i].habilitado = 1;
		i++;
	}
}

void mostrar_lista_alquileres(alquiler *alquileres) {
	int i;
	for(i = 0 ; i < MAX_ALQUILERES ; i++) {
		printf("%d %d %d %d %d\n", alquileres[i].ID_cliente, alquileres[i].equipo, alquileres[i].operador, alquileres[i].tiempo_estimado, alquileres[i].alquilado);
	}
}

void mostrar_lista_clientes(cliente *clientes) {
	int i;
	for(i = 0 ; i < MAX_CLIENTES ; i++) {
		printf("%d %ld %s %s %d\n", clientes[i].ID, clientes[i].DNI, clientes[i].nombre, clientes[i].apellido, clientes[i].habilitado);
	}
}






