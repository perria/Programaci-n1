
#define FUNCIONES_H_INCLUDED



typedef struct{
    char nombreCliente[50];
    char apellidoCliente[60];
    int idDelCliente;
    int dniCliente;
    int estadoCliente; /**< Active (1) or Inactive (0)  */
}Cliente;

typedef struct{
    char equipo[60];
    int idDelCliente;
    int numOperador;
    int tiempoAlquiler;
    int estimaAlquiler;
    int estadoAlquiler; /**< Active (1) or Inactive (0)  */
}Alquiler;

int findProductByCode(Cliente personas[],int idDelCLiente);
int getStringNumeros(char mensaje[],char input[]);
int findEmptyPlace(Cliente personas[]);
void cargarDatos(Cliente personas[]);
int menuOpciones(char texto[], char opcion[]);
void setStatus(Cliente personas[]);
int getInt(char mensaje[]);
void baja(Cliente personas[]);
char modificar(Cliente persona[]);


