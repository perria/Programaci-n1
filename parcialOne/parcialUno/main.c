#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}

/**
 * \brief Genera un n�mero aleatorio
 * \param desde N�mero aleatorio m�nimo
 * \param hasta N�mero aleatorio m�ximo
 * \param iniciar Indica si se trata del primer n�mero solicitado 1 indica que si
 * \return retorna el n�mero aleatorio generado
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







///VALIDACIONES

/**
 * \brief Verifica si el valor recibido es num�rico aceptando flotantes
 * \param str Array con la cadena a ser analizada
 * \return 1 si es n�merico y 0 si no lo es
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
 * \brief Verifica si el valor recibido es num�rico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es n�merico y 0 si no lo es
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
 * \brief Verifica si el valor recibido contiene solo letras y n�meros
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio o letras y n�meros, y 0 si no lo es
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
 * \brief Verifica si el valor recibido contiene solo n�meros, + y -
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



    //

    void borrarPersona(EPersona inicio [], int personas)
    {
        int i;
        char rta;
        for(i=0;i<personas;i++)
        {
            printf("Ingrese S para borrar a: %s o N para dejarlo\n", inicio[i].nombre);
            scanf("%c",&rta);
            if(rta=='s')
            {
                printf("%s ha sido borrado\n",inicio[i].nombre);
                inicio[i].estado=BAJA;
            }
        }
    }









}







//ejercicios de internet



1. Que rellene un array con los 100 primeros n�meros enteros y los muestre en pantalla en orden ascendente.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
            int x,tabla[100];

            for (x=1;x<=100;x++)
            {
        tabla[x]=x;
    }

            for (x=1;x<=100;x++)
            {
        printf("%d\n",tabla[x]);
    }

    system("PAUSE");
    return 0;
}

2. Que rellene un array con los 100 primeros n�meros enteros y los muestre en pantalla en orden descendente.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
            int x,tabla[100];

            for (x=1;x<=100;x++)
            {
        tabla[x]=x;
    }

            for (x=100;x>=1;x--)
            {
        printf("%d\n",tabla[x]);
    }

    system("PAUSE");
    return 0;
}

3. Que rellene un array con los n�meros primos comprendidos entre 1 y 100 y los muestre en pantalla en orden ascendente.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
            int x,cont,z,i,tabla[100];

            i=0;
            for (x=1;x<=100;x++)
            {
        cont=0;
        for (z=1;z<=x;z++)
        {
            if (x%z==0)
            {
               cont++;
            }
        }

        if (cont==2 || z==1 || z==0)
        {
         tabla[i]=x;
         i++;
        }

    }

            for (x=0;x<i;x++)
            {
        printf("%d\n",tabla[x]);
    }

    system("PAUSE");
    return 0;
}

4. Que rellene un array con los n�meros pares comprendidos entre 1 y 100 y los muestre en pantalla en orden ascendente.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
            int x,cont,z,i,tabla[100];

            i=0;
            for (x=1;x<=100;x++)
            {
        cont=0;
        if (x%2==0)
        {
           tabla[i]=x;
           i++;
        }
    }

            for (x=0;x<i;x++)
            {
        printf("%d\n",tabla[x]);
    }

    system("PAUSE");
    return 0;
}

5. Que rellene un array con los n�meros impares comprendidos entre 1 y 100 y los muestre en pantalla en orden ascendente.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
            int x,cont,z,i,tabla[100];

            i=0;
            for (x=1;x<=100;x++)
            {
        cont=0;
        if (x%2==1)
        {
           tabla[i]=x;
           i++;
        }
    }

            for (x=0;x<i;x++)
            {
        printf("%d\n",tabla[x]);
    }

    system("PAUSE");
    return 0;
}

6. Que lea 10 n�meros por teclado, los almacene en un array y muestre la suma, resta, multiplicaci�n y divisi�n de todos.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
            int x,tabla[10];
            int sum,res,mul,div;

            for (x=0;x<10;x++)
            {
        printf("Introduzca n�mero\n");
        scanf("%d",&tabla[x]);
    }

            sum=tabla[0];
    res=tabla[0];
    mul=tabla[0];
    div=tabla[0];

            for (x=1;x<10;x++)
            {
        sum=sum+tabla[x];
        res=res-tabla[x];
        mul=mul*tabla[x];
        div=div/tabla[x];
    }

            printf("Suma: %d\n",sum);
            printf("Resta: %d\n",res);
            printf("Multiplicaci�n: %d\n",mul);
            printf("Divisi�n: %d\n",div);

    system("PAUSE");
    return 0;
}

7. Que lea 10 n�meros por teclado, los almacene en un array y los ordene de forma ascendente.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float aux, numeros[10];
  int i,j,n=10;

  for (i=0;i<n;i++){
                    printf("Escriba un n�mero");
                    scanf("%f",&numeros[i]);
      }

  for(i=0;i<n-1;i++)
  {
   for(j=i+1;j<n;j++)
   {
       if(numeros[i]<numeros[j])
       {
           aux=numeros[i];
           numeros[i]=numeros[j];
           numeros[j]=aux;
       }
   }
  }

  for (i=n-1;i>=0;i--){
      printf("%f\n",numeros[i]);
  }

  system("PAUSE");
  return 0;
}

8. Que lea 10 n�meros por teclado, 5 para un array y 5 para otro array distinto. Mostrar los 10 n�meros en pantalla mediante un solo array.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int aux, numeros1[5],numeros2[5],numeros3[10];
  int i,j;

  for (i=0;i<5;i++){
                    printf("Escriba un n�mero");
                    scanf("%d",&numeros1[i]);
      }

  for (i=0;i<5;i++){
                    printf("Escriba un n�mero");
                    scanf("%d",&numeros2[i]);
      }


  for(i=0;i<5;i++)
  {
   numeros3[i]=numeros1[i];
  }

  for(i=0;i<5;i++)
  {
   numeros3[5+i]=numeros2[i];
  }

  for (i=0;i<10;i++){
      printf("%d\n",numeros3[i]);
  }

  system("PAUSE");
  return 0;
}

9. Que lea 5 n�meros por teclado, los copie a otro array multiplicados por 2 y muestre el segundo array.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int aux, numeros1[5],numeros2[5];
  int i,j;

  for (i=0;i<5;i++){
                    printf("Escriba un n�mero");
                    scanf("%d",&numeros1[i]);
      }

  for(i=0;i<5;i++)
  {
   numeros2[i]=numeros1[i]*2;
  }

  for (i=0;i<5;i++){
      printf("%d\n",numeros2[i]);
  }

  system("PAUSE");
  return 0;
}

10. Que lea 5 n�meros por teclado, los copie a otro array multiplicados por 2 y los muestre todos ordenados usando un tercer array.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int aux, numeros1[5],numeros2[5],numeros3[10];
  int i,j;

  for (i=0;i<5;i++){
                    printf("Escriba un n�mero");
                    scanf("%d",&numeros1[i]);
      }

  for(i=0;i<5;i++)
  {
   numeros2[i]=numeros1[i]*2;
  }

  for(i=0;i<5;i++)
  {
   numeros3[i]=numeros1[i];
  }

  for(i=0;i<5;i++)
  {
   numeros3[5+i]=numeros2[i];
  }

  for (i=0;i<10;i++){
      printf("%d\n",numeros3[i]);
  }

  system("PAUSE");
  return 0;
}

11. Que rellene un array con los 100 primeros n�meros pares y muestre su suma.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
            int x,cont,sum,i,tabla[100];

            i=0;
            sum=0;
            for (x=1;x<=100;x++)
            {
        cont=0;
        if (x%2==0)
        {
           tabla[i]=x;
           i++;
        }
    }

            for (x=0;x<i;x++)
            {
        sum=sum+tabla[x];
    }

    printf("%d\n",sum);

    system("PAUSE");
    return 0;
}

12. Que lea 10 n�meros por teclado, los almacene en un array y muestre la media.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float sum, numeros1[10];
  int i;

  sum=0;
  for (i=0;i<10;i++){
                    printf("Escriba un n�mero");
                    scanf("%f",&numeros1[i]);
      }

  for(i=0;i<10;i++)
  {
   sum=sum+numeros1[i];
  }

  printf("%f\n",sum/10);

  system("PAUSE");
  return 0;
}

13. Que mediante un array almacene n�meros tanto positivos como negativos y los muestre ordenados.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float aux, numeros[10];
  int i,j,n=10;

  for (i=0;i<n;i++){
                    printf("Escriba un n�mero");
                    scanf("%f",&numeros[i]);
      }

  for(i=0;i<n-1;i++)
  {
   for(j=i+1;j<n;j++)
   {
       if(numeros[i]<numeros[j])
       {
           aux=numeros[i];
           numeros[i]=numeros[j];
           numeros[j]=aux;
       }
   }
  }

  for (i=n-1;i>=0;i--){
      printf("%f\n",numeros[i]);
  }

  system("PAUSE");
  return 0;
}

14. Que rellene un array con 20 n�meros y luego busque un n�mero concreto.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int  i,x=0,vector[20], n=20, dato, centro,inf=0,sup=n-1;

    for (i=0;i<20;i++){
        printf("Escriba un n�mero");
        scanf("%d",&vector[i]);
    }

    printf("Escriba el n�mero a buscar");
    scanf("%d",&dato);

    while(inf<=sup)
    {
     centro=(sup+inf)/2;
     if (vector[centro]==dato)
     {
        printf("Existe\n");
        x=1;
        break;
     }
     else if(dato < vector [centro] )
     {
        sup=centro-1;
     }
     else
     {
       inf=centro+1;
     }
    }

    if (x==0)
    {
       printf("No existe\n");
    }

    system("PAUSE");
    return 0;

}

15. Que pinte un tablero de ajedrez, los peones con la letra P, las torres con T, los caballos con C, los alfiles con A, el rey con R y la reina con M.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int x,y;

    for (x=0;x<8;x++)
    {
        for (y=0;y<8;y++)
        {
            //peones
            if (x==1 || x==6)
            {
             printf("P");
            }
            //torres
            else if ((x==0 && y==0) ||
                    (x==7 && y==0) ||
                    (x==0 && y==7) ||
                    (x==7 && y==7)
                    )
            {
             printf("T");
            }
            //caballos
            else if ((x==0 && y==1) ||
                    (x==7 && y==1) ||
                    (x==0 && y==6) ||
                    (x==7 && y==6)
                    )
            {
             printf("C");
            }
            //alfiles
            else if ((x==0 && y==2) ||
                    (x==7 && y==2) ||
                    (x==0 && y==5) ||
                    (x==7 && y==5)
                    )
            {
             printf("A");
            }
            //reina
            else if ((x==0 && y==3) ||
                    (x==7 && y==3)
                    )
            {
             printf("M");
            }
            //rey
            else if ((x==0 && y==4) ||
                    (x==7 && y==4)
                    )
            {
             printf("R");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;

}

16. Que muestre los primeros 100 n�meros de izquierda a derecha usando un array de dos dimensiones.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int x,y, numeros[10][10];

    for (x=0;x<10;x++)
    {
        for (y=0;y<10;y++)
        {
            numeros[x][y]=(x*10)+1+y;
        }

    }

    for (x=0;x<10;x++)
    {
        for (y=0;y<10;y++)
        {
            printf("%d ",numeros[x][y]);
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;

}

17. Que muestre los primeros 100 n�meros de izquierda a derecha usando un array de dos dimensiones, la �ltima fila a mostrar� la suma de sus respectivas columnas.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int x,y,sum, numeros[11][10];

    for (y=0;y<10;y++)
    {
        sum=0;
        for (x=0;x<10;x++)
        {
            numeros[x][y]=(x*10)+1+y;
            sum=sum+numeros[x][y];
        }
        numeros[10][y]=sum;
    }

    for (x=0;x<11;x++)
    {
        for (y=0;y<10;y++)
        {
            printf("%d ",numeros[x][y]);
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}

18. Que rellene un array de dos dimensiones con n�meros pares, lo pinte y despu�s que pida una posici�n X,Y y mostrar el n�mero correspondiente.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int x,y,num=2, numeros[3][3];

    for (x=0;x<3;x++)
    {
        for (y=0;y<3;y++)
        {
            numeros[x][y]=num;
            num=num*2;
        }
    }

    printf("Introduzca coordenada x: ");
    scanf("%d",&x);
    printf("Introduzca coordenada y: ");
    scanf("%d",&y);

    printf("El n�mero es: %d\n",numeros[x][y]);

    system("PAUSE");
    return 0;
}

19. Que rellene una matriz de 3x3 y muestre su traspuesta (la traspuesta se consigue intercambiando filas por columnas y viceversa).

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int x,y,num=0, numeros[4][4];

    for (x=0;x<3;x++)
    {
        for (y=0;y<3;y++)
        {
            numeros[x][y]=num;
            num++;
        }
    }

    printf("El array original es: \n\n\n");

    for(x = 0;x < 3;x++)
    {
      for(y = 0;y < 3;y++)
      {
          printf("    %d     ", numeros[x][y]);
      }
      printf("\n\n\n");
    }

    printf("La traspuesta es: \n\n\n");

    for(x = 0;x < 3;x++)
    {
      for(y = 0;y < 3;y++)
      {
          printf("    %d     ", numeros[y][x]);
      }
      printf("\n\n\n");
    }

    system("PAUSE");
    return 0;
}

20. Que lea una cadena y la muestre al rev�s.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int indice,x;
    char frase[50];

    printf("Introduzca una frase: ");
    gets(frase);

    for(x = 0;x < 50;x++)
    {
      if (frase[x]=='\0')
      {
       indice=x;
       break;
      }
    }

    printf("La frase al reves es: \n\n");

    for(x = indice-1;x >=0;x--)
    {
      printf("%c",frase[x]);
    }

    printf("\n\n");

    system("PAUSE");
    return 0;
}

21. Que lea una cadena y diga cuantas vocales hay.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int sum=0,x;
    char frase[50];

    printf("Introduzca una frase: ");
    gets(frase);

    for(x = 0;x < 50;x++)
    {
      switch (frase[x])
      {
           case 'a':
                sum++;
                break;
           case 'e':
                sum++;
                break;
           case 'i':
                sum++;
                break;
           case 'o':
                sum++;
                break;
           case 'u':
                sum++;
                break;
           default:
                break;
      }

    }

    printf("\n\nEn la frase hay %d vocales\n\n",sum);

    printf("\n\n");

    system("PAUSE");
    return 0;
}

22. Que lea una cadena y diga cuantas may�sculas hay.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sum=0,x;
    char frase[50];

    printf("Introduzca una frase: ");
    gets(frase);

    for(x = 0;x < 50;x++)
    {
      if (frase[x]>=65 && frase[x]<=90)
      {
       sum++;
      }
    }

    printf("\n\nEn la frase hay %d may�sculas\n\n",sum);

    printf("\n\n");

    system("PAUSE");
    return 0;
}

23. Que lea una cadena y la encripte sumando 3 al c�digo ASCII de cada car�cter. Mostrar por pantalla.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sum=0,x;
    char frase[50];

    printf("Introduzca una frase: ");
    gets(frase);

    for(x = 0; x < 50;x++)
    {
      if (frase[x]!='\0')
      {
       frase[x]=frase[x]+3;
      }
    }

    printf("\n\nLa nueva frase es:\n\n",sum);
    printf("\n\n%s\n\n",frase);
    printf("\n\n");

    system("PAUSE");
    return 0;
}

24. Que gestione los datos de stock de una tienda de comestibles, la informaci�n a recoger ser�: nombre del producto, precio, cantidad en stock. La tienda dispone de 10 productos distintos. El programa debe ser capaz de:

Dar de alta un producto nuevo.
Buscar un producto por su nombre.
Modificar el stock y precio de un producto dado.

#include <stdio.h>
#include <stdlib.h>

struct producto {
    char nombre[50];
    float precio;
    int cantidad;
};

int main(int argc, char *argv[])
{
    struct producto prod,productos[10];

    int x,opcion=1;

    for (x=0;x<10;x++)
        {
            strcpy(productos[x].nombre,"X");
            productos[x].precio=0;
            productos[x].cantidad=0;
        }

    while ((opcion==1 || opcion==2 || opcion==3) && (opcion!=4))
    {

        printf("1- Alta de producto\n");
        printf("2- Buscar por nombre\n");
        printf("3- Modificar stock y precio\n");
        printf("4- Salir\n");
        printf("Introduzca una opci�n: ");
        scanf("%d",&opcion);

        if (opcion==1)
        {
           printf("Introduzca un nombre: ");
           gets(prod.nombre);
           gets(prod.nombre);
           printf("Introduzca un precio: ");
           scanf("%f",&prod.precio);
           printf("Introduzca un stock: ");
           scanf("%d",&prod.cantidad);

           for(x = 9; x >=0; x--)
           {
            if (x!=0)
            {
                strcpy(productos[x].nombre,productos[x-1].nombre);
                productos[x].precio=productos[x-1].precio;
                productos[x].cantidad=productos[x-1].cantidad;
            }
            else
            {
               strcpy(productos[x].nombre,prod.nombre);
               productos[x].precio=prod.precio;
               productos[x].cantidad=prod.cantidad;
            }
           }
           printf("\nProducto creado. \n\n");
        }
        else if (opcion==2)
        {
           printf("Introduzca un nombre: ");
           gets(prod.nombre);
           gets(prod.nombre);

           for(x = 0; x < 10;x++)
           {

             if (strcmp(productos[x].nombre,prod.nombre)==0)
             {
               printf("\nNombre: %s\n",productos[x].nombre);
               printf("Precio: %f\n",productos[x].precio);
               printf("Cantidad en Stock: %d\n",productos[x].cantidad);
             }
           }
           printf("\n\n");
        }
        else if (opcion==3)
        {
           printf("Introduzca un nombre: ");
           gets(prod.nombre);
           gets(prod.nombre);

           for(x = 0; x < 10;x++)
           {
             if (strcmp(productos[x].nombre,prod.nombre)==0)
             {
               printf("Introduzca un precio: ");
               scanf("%f",&productos[x].precio);
               printf("Introduzca un stock: ");
               scanf("%d",&productos[x].cantidad);
               printf("\nProducto modificado.");
             }
           }
           printf("\n\n");
        }
    }


    system("PAUSE");
    return 0;
}

25. Que gestiona las notas de una clase de 20 alumnos de los cuales sabemos el nombre y la nota. El programa debe ser capaz de:

Buscar un alumno.
Modificar su nota.
Realizar la media de todas las notas.
Realizar la media de las notas menores de 5.
Mostrar el alumno que mejores notas ha sacado.
Mostrar el alumno que peores notas ha sacado.

#include <stdio.h>
#include <stdlib.h>

struct alumno {
    char nombre[50];
    float nota;
};

int main(int argc, char *argv[])
{
    struct alumno alum,alumnos[5];

    int x,opcion=1;
    float sum=0,cont=0,mejor,peor;


    for (x=0;x<5;x++)
    {
        printf("Introduzca nombre alumno:");
        gets(alumnos[x].nombre);
        gets(alumnos[x].nombre);
        printf("Introduzca nota:");
        scanf("%f",&alumnos[x].nota);
    }

    while ((opcion==1 || opcion==2 ||
            opcion==3 || opcion==4 ||
            opcion==5 || opcion==6) && (opcion!=7))
    {

        printf("1- Buscar un alumno\n");
        printf("2- Modificar nota\n");
        printf("3- Media de todas las notas\n");
        printf("4- Media de todas las notas inferiores a 5\n");
        printf("5- Alumno con mejores notas\n");
        printf("6- Alumno con peores notas\n");
        printf("7- Salir\n");
        printf("Introduzca una opci�n: ");
        scanf("%d",&opcion);

        if (opcion==1)
        {
           printf("Introduzca un nombre: ");
           gets(alum.nombre);
           gets(alum.nombre);

           for(x = 0; x < 5;x++)
           {
             if (strcmp(alumnos[x].nombre,alum.nombre)==0)
             {
               printf("\nNombre: %s\n",alumnos[x].nombre);
               printf("Nota: %f\n",alumnos[x].nota);
             }
           }
           printf("\n\n");
        }
        else if (opcion==2)
        {
           printf("Introduzca un nombre: ");
           gets(alum.nombre);
           gets(alum.nombre);

           for(x = 0; x < 5;x++)
           {
             if (strcmp(alumnos[x].nombre,alum.nombre)==0)
             {
               printf("Introduzca una nota: ");
               scanf("%f",&alumnos[x].nota);
               printf("\nNota modificada.");
             }
           }
           printf("\n\n");
        }
        else if (opcion==3)
        {
          sum=0;
          for(x = 0; x < 5;x++)
          {
             sum=sum+alumnos[x].nota;
          }
          printf("\nLa media de las notas es de: %f \n",(sum/5));
        }
        else if (opcion==4)
        {
          sum=0;
          cont=0;
          for(x = 0; x < 5;x++)
          {
             if (alumnos[x].nota<5)
             {
              sum=sum+alumnos[x].nota;
              cont++;
             }
          }
          printf("\nLa media de las notas inferiores a 5 es: %f \n",sum/cont);
        }
        else if (opcion==5)
        {
          mejor=0;
          for(x = 0; x < 5;x++)
          {
             if (alumnos[x].nota>mejor)
             {
              mejor=alumnos[x].nota;
              alum.nota=alumnos[x].nota;
              strcpy(alum.nombre,alumnos[x].nombre);
             }
          }
          printf("\nEl alumno con mejores notas es: %s \n",alum.nombre);
        }
        else if (opcion==6)
        {
          peor=10;
          for(x = 0; x < 5;x++)
          {
             if (alumnos[x].nota<peor)
             {
              peor=alumnos[x].nota;
              alum.nota=alumnos[x].nota;
              strcpy(alum.nombre,alumnos[x].nombre);
             }
          }
          printf("\nEl alumno con peores notas es: %s \n",alum.nombre);
        }
    }


    system("PAUSE");
    return 0;
}

