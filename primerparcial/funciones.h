#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#define MAX_CLIENTES 3
#define MAX_ALQUILERES 2
#define COMIENZO_IDE 10
#define MAX_NOMBRE 20
#define MAX_APELLIDO 40
#define AMOLADORA 0
#define TALADRO 1
#define MEZCLADORA 2
#define ALQUILADO 1
#define FINALIZADO 0

/*typedef struct {

    char nombreC[50];
    char apellidoC[80];
    int idC;
    int estadoC;
    int dniC;
    int cantidad;

}Cliente;


typedef struct {

    char equipoAl[300];
    int tiempoEAl;
    int operadorAl;
    int idC;
    int cont0, cont1, cont2;

}NuevoAlquiler;*/


/*int equiposMasAlquilados(struct NuevoAlquiler alquiler[]);
int clienteMasAlquileres(struct Clientes client[],struct NuevoAlquiler alquiler[]);
int finAlquiler(void);
int nuevoAlquiler(struct Cliente client[].idC);
void alta(void);*/

typedef struct {
	int ID;
	long int DNI;
	char nombre[MAX_NOMBRE], apellido[MAX_APELLIDO];
	int habilitado;
}cliente;

typedef struct {
	int ID_cliente, equipo, tiempo_estimado, operador, alquilado, tiempo_real;
}alquiler;

typedef struct {
	int equipo, cantidad;
}max_equipos;


void mostrar_lista_clientes(cliente *clientes);
void alta_cliente(cliente *clientes); // 1)
int buscar_id(cliente *clientes, int *id);
void modificacion(cliente *clientes); // 2)
void baja(cliente *clientes); // 3)
int buscar_posicion_por_id(cliente *clientes);
void nuevo_alquiler(alquiler *alquileres);
void mostrar_lista_alquileres(alquiler *alquileres);
int buscar_alquiler(alquiler *alquileres, int id);
int buscar_posicion_alquiler(alquiler *alquileres);
void fin_de_alquiler(alquiler *alquileres);
int *acumular_alquileres_por_cliente(alquiler *alquileres);
int buscar_maxima_cantidad_de_alquiler(int *alquileres_por_cliente);
void cliente_con_mas_Alquileres(int pos_max, cliente *clientes);
void ordenar(max_equipos *equipos, int cant_equipos);
void obtener_el_o_los_maximos(max_equipos *equipos, int cant_equipos);
void equipo_mas_alquilado(alquiler *alquileres);
float promedio_tiempo_real(alquiler *alquileres);
