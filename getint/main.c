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

int getInt(char mensaje[],char mensajeError[],int intentos,int maximo,int minimo);

void saludo(void);

int main()
{
    int resultado;
    saludo();
    resultado = getInt("\nIngrese su edad: ","\nError usted ingreso una edad no valida",3,100,1);
    printf("\nLa edad ingresada fue %d",resultado);
    resultado = getInt("\nIngrese la cantidad de kilos: ","\nError usted ingreso una cantidad de kilos no valida",5,300,15);
    printf("\nLa cantidad de kilos ingresada fue %d",resultado);
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
        if(aux>maximo||aux<minimo)
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
