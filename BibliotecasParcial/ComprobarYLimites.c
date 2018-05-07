#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ComprobarYLimites.h"

int getInt(char message[],char eMessage[], int lowLimit, int hiLimit, int estado)
{
    int comprobante,aux;
    printf("%s",message);
    comprobante = scanf("%d",&aux);
    if(comprobante == 1)
    {
        if((aux<hiLimit && aux>lowLimit) || estado==0)
        {
            return aux;
        }
    }
    printf("%s",eMessage);
}


float getFloat(char message[],char eMessage[], float lowLimit, float hiLimit, int estado)
{
    float comprobante,aux;
    printf("\nIngrese un decimal: ");
    comprobante = scanf("%f",&aux);
    if(comprobante == 1)
    {
        if((aux<hiLimit && aux>lowLimit) || estado==0)
        {
                return aux;
        }
    }
    printf("%s",eMessage);
}

char getChar(char message[],char eMessage[], char lowLimit, char hiLimit, int estado)
{
    char comprobante,aux;
    printf("%s",message);
    comprobante = scanf("%c",&aux);
    if(comprobante == 1)
    {
        if((aux<hiLimit && aux>lowLimit) || estado==0)
        {
            return aux;
        }
    }
    printf("%s",eMessage);
}

char getString(char message[],char eMessage[], int lowLimit, int hiLimit, int estado)
{
    char comprobante,auxs[100],aux[100];
    int largo;
    printf("%s",message);
    comprobante = scanf("%s",auxs);
    strcpy(aux,auxs);
    largo = strlen(aux);
    if(comprobante == 1)
    {
        if((largo<hiLimit && largo>lowLimit) || estado==0)
        {
            return auxs;
        }
    }
    printf("%s",eMessage);
}
