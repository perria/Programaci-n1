#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "funciones.h"


///FUNCIONES ARITMETICAS




/**
 * \brief Genera un número aleatorio
 * \param desde Número aleatorio mínimo
 * \param hasta Número aleatorio máximo
 * \param iniciar Indica si se trata del primer número solicitado 1 indica que si
 * \return retorna el número aleatorio generado
 *
 */
char getNumeroAleatorio(int desde , int hasta, int iniciar)
{
    if(iniciar)
        srand (time(NULL));
    return desde + (rand() % (hasta + 1 - desde)) ;
}

/** \brief Realiza la suma.
 * \param Operando A.
 * \param Operando B.
 * \return Devuelve el resultado de la suma.
 */
float suma(float a, float b)
{
    float resultadoSuma;
    resultadoSuma = a+b;
    return resultadoSuma;
}

/** \brief Realiza la resta.
 * \param Operando A.
 * \param Operando B.
 * \return Devuelve el resultado de la resta A-B.
 */
float resta(float a,float b)
{
    float resultadoResta;
    resultadoResta = a-b;
    return resultadoResta;
}

/** \brief Realiza la multiplicacion.
 * \param Operando A.
 * \param Operando B.
 * \return Devuelve el resultado de la multiplicacion.
 */

float multiplicacion(float a,float b)
{
    float resultadoMult;
    resultadoMult = a*b;
    return resultadoMult;
}

/** \brief Realiza la division.
 * \param Operando A.
 * \param Operando B.
 * \return Devuelve el resultado de la division.
 */

float division(float a,float b)
{
    float resultadoDiv;
    resultadoDiv = a/b;
    return resultadoDiv;
}


/** \brief Calcula el factorial.
 * \param Operando A.
 * \return Devuelve el resultado del factorial.
 */

int factorial(int a)
{
    int i=0;
    int temp=a;

    for(i=1;i<a;i++)
    {
        temp=i*temp;
    }

    return temp;
}















///////////////////////////////////////

///ESTRUCTURA DE PRODUCTO
typedef struct  Product;



///OTRAS ESTRUCTURAS


typedef struct eValidar;
typedef struct ePersona;
typedef struct eMenu;









///////////////////////////////////////////////////////////////////////////////////////////////////////


///SOLICITACIONES AL USUARIO

/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}


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
 * \brief Solicita un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El caracter ingresado por el usuario
 *
 */
char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}




/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return void
 */
void getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    scanf ("%s", input);
}

/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int getStringLetras(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
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
 * \brief Solicita un texto numérico al usuario y lo devuelve (acepta flotantes)
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int getStringNumerosFlotantes(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumericoFlotante(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}










/////////////////////////////////////////////////////////////////////////////////////////////

///VALIDACIONES

/**
 * \brief Verifica si el valor recibido es numérico aceptando flotantes
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */

int esNumericoFlotante(char str[])
{
   int i=0;
   int cantidadPuntos=0;
   while(str[i] != '\0')
   {
       if (str[i] == '.' && cantidadPuntos == 0)
       {
           cantidadPuntos++;
           i++;
           continue;

       }
       if(str[i] < '0' || str[i] > '9')
           return 0;
       i++;
   }
   return 1;
}

/**
 * \brief Verifica si el valor recibido es numérico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */

int esNumerico(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if(str[i] < '0' || str[i] > '9')
           return 0;
       i++;
   }
   return 1;
}

/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
           return 0;
       i++;
   }
   return 1;
}


/**
 * \brief Verifica si el valor recibido contiene solo letras y números
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio o letras y números, y 0 si no lo es
 *
 */
int esAlfaNumerico(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
           return 0;
       i++;
   }
   return 1;
}


/**
 * \brief Verifica si el valor recibido contiene solo números, + y -
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo numeros, espacios y un guion.
 *
 */
int esTelefono(char str[])
{
   int i=0;
   int contadorGuiones=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] != '-') && (str[i] < '0' || str[i] > '9'))
           return 0;
       if(str[i] == '-')
            contadorGuiones++;
       i++;
   }
   if(contadorGuiones==1) // debe tener un guion
        return 1;

    return 0;
}



/**
 * \brief valida el rango de edad ingresado por el usuario
 * \param edad es el array a ser analizado
 * \return (0) si esta fuera de rango (1) si se encuentra dentro del rango
 *
 */

int esEdad(char edad[])
{
    int auxEdad;

    auxEdad = atoi(edad);

    if(auxEdad < 1 || auxEdad > 99)
    {
        return 0;
    }

    return 1;
}



/**
int menuOpciones(char texto[], char opcion[])
    {
        int auxOpcion;
        auxOpcion=atoi(opcion);
        if(auxOpcion<1||auxOpcion>7)
        {
            system("cls");
            printf("La opcion debe ser un num entre 1 y 7/n Por favor, vuelva a Ingresar la opcion.");
            fflush(stdin);
            return 0;
        }
        else {  return auxOpcion;}
    }**/


/**
 * \brief valida el rango del dni ingresado por el usuario
 * \param dni es el array a ser analizado
 * \return (0) si esta fuera de rango o tiene mas o menos de 8 digitos (1) si se encuentra dentro del rango
 *
 */



int validacionDni(char auxDni[])
{
    int x;

    x = strlen(auxDni);

    if(x!=8)
    {
        return 0;
    }
    return 1;
}














///////////////////////////////////
///INICIALIZACION Y BUSQUEDA DE PRODUCTOS














/**
 * \brief Inicializa el status en un array de productos
 * \param productArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \param value Es el valor que se asignara a estatus
 * \return -
 *
 */
void setStatus(Product productArray[],int arrayLenght,int value)
{
    int i;
    for(i=0;i < arrayLenght; i++)
    {
        productArray[i].status = value;
    }
}

/**
 * \brief Busca la primer ocurrencia de un producto mediante su codigo
 * \param productArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \param code Es el valor que se busca
 * \return Si no hay ocurrencia (-1) y si la hay la posicion de la misma (i)
 *
 */
int findProductByCode(Product productArray[],int arrayLenght,int code)
{
    int i;
    for(i=0;i < arrayLenght; i++)
    {
        if(productArray[i].code == code && productArray[i].status == 1)
        {
            return i;
        }
    }
    return -1;
}

/**
 * \brief Busca el primer lugar no utilizado en el array
 * \param productArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \return Si no hay lugares libres (-1) y si la hay la posicion del mismo (i)
 *
 */
int findEmptyPlace(Product productArray[],int arrayLenght)
{
    int i;
    for(i=0;i < arrayLenght; i++)
    {
        if(productArray[i].status == 0)
        {
            return i;
        }
    }
    return -1;
}

/**
 * \brief Busca el precio mas bajo del array de productos
 * \param productArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \return Si no hay productos activos (-1) y si lo hay el precio de ese producto
 *
 */
float getCheaperPrice(Product productArray[],int arrayLenght)
{
    int i;
    float cheaperPrice = -1;

    for(i=0;i < arrayLenght; i++)
    {
        if(productArray[i].status == 1)
        {
            cheaperPrice = productArray[i].price;
            break;
        }
    }

    if(cheaperPrice == -1) /**< Si se cumple indica que no existen productos activos en el array */
        return -1;

    for(i=0;i < arrayLenght; i++)
    {
        if(cheaperPrice > productArray[i].price && productArray[i].status == 1)
        {
            cheaperPrice = productArray[i].price;
        }
    }

    return cheaperPrice;
}

/**
 * \brief Busca el precio promedio
 * \param productArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \return Si no hay productos activos (-1) y si lo hay el precio de ese producto
 *
 */
float getAveragePrice(Product productArray[],int arrayLenght)
{
    int i;
    float totalPrice = 0;
    int activeProducts = 0;

    for(i=0;i < arrayLenght; i++)
    {
        if(productArray[i].status == 1)
        {
            totalPrice = totalPrice + productArray[i].price;
            activeProducts++;
        }
    }
    if(activeProducts == 0)
        return -1;

    return (totalPrice / (float)activeProducts);
}

/**
 * \brief Busca el precio promedio
 * \param productArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \return Si no hay productos activos (-1) y si lo hay el precio de ese producto
 *
 */
void orderArrayByDescription(Product productArray[],int arrayLenght)
{
    Product productAux;
    int i,j;

    for(i=0; i < MAX_QTY - 1; i++)
    {
        if(productArray[i].status == 0)
        {
            continue;
        }
        for(j=i+1; j < MAX_QTY; j++)
        {
            if(productArray[j].status == 0)
            {
                continue;
            }
            if(strcmp(productArray[j].description,productArray[i].description) > 0)
            {
                productAux = productArray[j];
                productArray[j] = productArray[i];
                productArray[i] = productAux;
            }
            else if(strcmp(productArray[j].description,productArray[i].description) == 0)
            {
                if(productArray[i].qty > productArray[j].qty)
                {
                    productAux = productArray[j];
                    productArray[j] = productArray[i];
                    productArray[i] = productAux;
                }
            }
        }
    }
}
