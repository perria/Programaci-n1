#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    // arrays de productos
    Product productArray[MAX_QTY];
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

    setStatus(productArray,MAX_QTY,0);

    while(option != 7)
    {
        //option= menuOpciones("a")
         option = getInt("\n\n\n1 - ALTA DEL ABONADO \n2 - MODIFICACION DEL ABONADO \n3 - BAJA DEL ABONADO\n4 - LISTAR\n5 - INFORMAR PRODUCTOS BARATOS\n6 - INFORMAR PRODUCTOS POR SOBRE EL PROMEDIO\n7 - SALIR\n\n\n");
            //option=menuOpcion()
            switch(option)
         {
            case 1:

                freePlaceIndex = findEmptyPlace(productArray,MAX_QTY);
                if(freePlaceIndex == -1)
                {
                    printf("\n\nNO QUEDAN LUGARES LIBRES!!!\n");
                    break;
                }

                printf("\nALTA\n");

                if (!getStringNumeros("Ingrese el codigo: ",codeAuxStr))
                {
                    printf ("El codigo debe ser numerico\n");
                    break;
                }
                codeAux = atoi(codeAuxStr);

                if(findProductByCode(productArray,MAX_QTY,codeAux) != -1)
                {
                    printf("\n\nEL CODIGO YA EXISTE!!!\n");
                    break;
                }


                if (!getStringLetras("Ingrese la descripcion: ",descriptionAux))
                {
                    printf ("La descripcion debe estar compuesta solo por letras\n");
                    break;
                }

                if (!getStringNumeros("Ingrese la cantidad: ",qtyAuxStr))
                {
                    printf ("La cantidad debe ser numerica\n");
                    break;
                }
                qtyAux = atoi(qtyAuxStr);

                if (!getStringNumerosFlotantes("Ingrese el valor: ",priceAuxStr))
                {
                    printf ("La cantidad debe ser numerica\n");
                    break;
                }
                priceAux = atof(priceAuxStr);

                productArray[freePlaceIndex].code = codeAux;
                strcpy(productArray[freePlaceIndex].description,descriptionAux);
                productArray[freePlaceIndex].price = priceAux;
                productArray[freePlaceIndex].qty = qtyAux;
                productArray[freePlaceIndex].status = 1;

                break;

            case 2:
                 if (!getStringNumeros("Ingrese el codigo de producto a modificar: ",codeAuxStr))
                {
                    printf ("El codigo de producto debe ser numerico\n");
                    break;
                }
                codeAux = atoi(codeAuxStr);
                foundIndex = findProductByCode(productArray,MAX_QTY,codeAux);
                if(foundIndex == -1)
                {
                    printf("\n\nNO SE ENCUENTRA ESE CODIGO\n");
                    break;
                }



               if (!getStringLetras("Ingrese la descripcion: ",descriptionAux))
                {
                    printf ("La descripcion debe estar compuesta solo por letras\n");
                    break;
                }

                if (!getStringNumeros("Ingrese la cantidad: ",qtyAuxStr))
                {
                    printf ("La cantidad debe ser numerica\n");
                    break;
                }
                qtyAux = atoi(qtyAuxStr);

                if (!getStringNumerosFlotantes("Ingrese el valor: ",priceAuxStr))
                {
                    printf ("La cantidad debe ser numerica\n");
                    break;
                }
                priceAux = atof(priceAuxStr);

                strcpy(productArray[foundIndex].description,descriptionAux);
                productArray[foundIndex].price = priceAux;
                productArray[foundIndex].qty = qtyAux;
                productArray[foundIndex].status = 1;
                break;

            case 3:









                 if (!getStringNumeros("Ingrese el codigo de producto a dar de baja: ",codeAuxStr))
                {
                    printf ("El codigo de producto debe ser numerico\n");
                    break;
                }
                codeAux = atoi(codeAuxStr);
                foundIndex = findProductByCode(productArray,MAX_QTY,codeAux);
                if(foundIndex == -1)
                {
                    printf("\n\nNO SE ENCUENTRA ESE CODIGO\n");
                    break;
                }
                productArray[foundIndex].status = 0;
                break;


            case 4:
                printf("\nLISTAR\n");

                orderArrayByDescription(productArray,MAX_QTY);
                for(i=0;i < MAX_QTY; i++)
                {
                    if(productArray[i].status != 0)
                    {
                        printf("\n%d - %s - %d - %.2f",productArray[i].code,productArray[i].description,productArray[i].qty,productArray[i].price);
                    }
                }
                break;

            case 5:
                printf("\nINFORMAR PRODUCTOS MAS BARATOS\n");
                priceAux = getCheaperPrice(productArray,MAX_QTY);
                if(priceAux == -1)
                {
                     printf("\nNO HAY PRODUCTOS\n");
                     break;
                }
                for(i=0;i < MAX_QTY; i++)
                {
                    if(productArray[i].price == priceAux && productArray[i].status == 1)
                    {
                        printf("\n%d - %s - %d - %.2f",productArray[i].code,productArray[i].description,productArray[i].qty,productArray[i].price);
                    }
                }
                break;

            case 6:
                printf("\nINFORMAR PRODUCTOS POR ENCIMA DEL PROMEDIO\n");
                priceAux = getAveragePrice(productArray,MAX_QTY);
                if(priceAux == -1)
                {
                     printf("\nNO HAY PRODUCTOS\n");
                     break;
                }
                for(i=0;i < MAX_QTY; i++)
                {
                    if(productArray[i].price > priceAux && productArray[i].status == 1)
                    {
                        printf("\n%d - %s - %d - %.2f",productArray[i].code,productArray[i].description,productArray[i].qty,productArray[i].price);
                    }
                }
                break;

         }
    }


    return 0;
}
