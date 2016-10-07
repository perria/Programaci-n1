
#define MAX_QTY 2


typedef struct{
    char description[51];
    int code;
    int qty;
    float price;
    int status; /**< Active (1) or Inactive (0)  */
}Product;



int getInt(char mensaje[]);
float getFloat(char mensaje[]);
char getChar(char mensaje[]);



int esNumerico(char str[]) ;
int esTelefono(char str[]);
int esAlfaNumerico(char str[]);
int esSoloLetras(char str[]);
int esNumericoFlotante(char str[]);
int esEdad(char edad[]);
int menuOpciones(char opcion[]);

void getString(char mensaje[],char input[]);
int getStringLetras(char mensaje[],char input[]);
int getStringNumeros(char mensaje[],char input[]);
int getStringNumerosFlotantes(char mensaje[],char input[]);







void setStatus(Product productArray[],int arrayLenght,int value);
int findEmptyPlace(Product productArray[],int arrayLenght);
int findProductByCode(Product productArray[],int arrayLenght,int code);
float getCheaperPrice(Product productArray[],int arrayLenght);
float getAveragePrice(Product productArray[],int arrayLenght);
void orderArrayByDescription(Product productArray[],int arrayLenght);










float suma(float a,float b);
float resta(float a,float b);
float multiplicacion(float a,float b);
float division(float a,float b);
int factorial(int a);
char getNumeroAleatorio(int desde , int hasta, int iniciar);








typedef struct {

    char buffer[4000];
    int minimo;
    int maximo;

}eValidar;



typedef struct {

    char nombre[50];
    int edad;
    char dni[20];
    int estado;

}ePersona;





typedef struct {

    char menu[500];
    char error[100];
    int desde;
    int hasta;

}eMenu;
