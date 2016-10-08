#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
#include <ctype.h>
#define ALQUILADO 1
#define FINALIZADO 0
#define CANT 3
#define VACIO 0
#define OCUPADO 1





int main()
{

    Cliente personas[CANT];
    Alquiler alqui[CANT];
    //________________________________________________

    char descriptionAux[51];
    int codeAux;
    int qtyAux;
    float priceAux;

    char codeAuxStr[50];
    char qtyAuxStr[50];
    char priceAuxStr[50];

    int freePlaceIndex;
    int foundIndex;
    int option = 0;

    int i;

    setStatus(personas);

    while(option != 7)
    {
         option = getInt("\n\n\n1 - ALTA DEL CLIENTE \n2 - MODIFICACION DEL CLIENTE \n3 - BAJA DEL CLIENTE\n4 - NUEVO ALQUILER\n5 - FIN DE ALQUILER\n6 - INFORMAR \n7 - SALIR\n\n\n");
            option=menuOpcion();
            switch(option)
         {
            case 1:

                freePlaceIndex = findEmptyPlace(personas);
                if(freePlaceIndex == -1)
                {
                    printf("\n\nNO QUEDAN LUGARES LIBRES!!!\n");
                    break;
                }

                cargarDatos(personas);

                break;

            case 2:
                 codeAux = getInt("Ingrese el id a modificar:");
                foundIndex = modificar();
                if(foundIndex == -1)
                {
                    printf("\n\nNO SE ENCUENTRA ESE CODIGO\n");
                    break;
                }

                break;

            case 3:

              baja(personas);
              break;

            case 4:

                break;

            case 5:

                break;

            case 6:

                break;

         }
    }


    return 0;
}

