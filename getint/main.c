#include <stdio.h>                 //MARTES 10/4
#include <stdlib.h>
#include "GetIn.h"
/** \brief
 *  getint ()
 * \param mensaje[] char mensaje de pedido de dato
 * \param mensajeError[] char mensaje de error
 * \param intentos int cantidad de posibilidades
 * \param maximo int el maximo numero posible
 * \param minimo int el minimo numero posible
 * \return int numero entero
 *
 */
int GetInBtw(char mensaje[],int maximo,int minimo,int *respuesta);

int getInt(char mensaje[],char mensajeError[],int intentos,int maximo,int minimo);

int cambiar(int *dato);

void saludo(void);

int main()
{
    int respuesta;
    int sueldo;
    respuesta=GetInBtw("Ingrese sueldo: ",9000,3000,&sueldo);
    if(respuesta==0)
    {
        printf("Sueldo correcto: %d",sueldo);
    }
    else
    {
        if(respuesta<0)
        {
            printf("Te falto.");
        }
        else
        {
            printf("Te pasaste.");
        }
    }
    //int numero=3;
    //cambiar(&numero);
    //printf("numero: %d",numero);

    //int resultado;
    //saludo();
    //resultado = getInt("\nIngrese su edad: ","\nError usted ingreso una edad no valida",3,100,1);
    //printf("\nLa edad ingresada fue %d",resultado);
    //resultado = getInt("\nIngrese la cantidad de kilos: ","\nError usted ingreso una cantidad de kilos no valida",5,300,15);
    //printf("\nLa cantidad de kilos ingresada fue %d",resultado);
    return 0;
}
void saludo(void)
{
    printf("Hola mundo!\n");
}

int getInt(char mensaje[],char mensajeError[],int intentos,int maximo,int minimo)
{
    int retorno = 0;
    do
    {
        int aux;
        printf("%s", mensaje);
        scanf("%d",&aux);
        if(aux>maximo||aux<minimo)//puedo usar getintbtw(max,min)==0
        {
            printf("%s",mensajeError);
            intentos--;
        }
        else
        {
            return aux;
        }

    }while(intentos>0);
    printf("\nSe le acabaron los intentos.");
    return retorno;
}

int cambiar(int *dato)
{
    *dato=666;
    return 0;
}

int GetInBtw(char mensaje[],int maximo,int minimo,int *respuesta)
{
    int retorno=0;    // UTILIZO 1 SOLO RETORNO SIEMPRE
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    if(auxiliar<minimo)
    {
        retorno= -1;
    }
    else
    {
        if(auxiliar>maximo)
        {
            retorno= 1;
        }
        else
        {
            retorno= 0;
        }
    }

    return retorno;
}








/** \brief
 *
 * \param
 * \param
 * \param
 * \param
 * \param
 * \param
 * \param
 * \return
 *
 */
