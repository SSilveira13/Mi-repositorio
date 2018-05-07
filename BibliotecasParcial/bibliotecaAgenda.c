#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bibliotecaAgenda.h"

void inicializarEstado(EPersona lista[])//INICIAR ESTADO
{
    int i;
    for(i=0;i<20;i++)
    {
        lista[i].estado = 0;
    }
}

int obtenerEspacioLibre(EPersona lista[],int cantidad)//ESPACIO LIBRE DE LA LISTA
{
    int retorno,i;
    for(i=0;i<cantidad;i++)
    {
        if(lista[i].estado == 0)
        {
            retorno = i;
            break;
        }
    }
    if(i == cantidad)
    {
        retorno = -1;
    }
    return retorno;
}

void agregarDato(EPersona lista[], int i)//AGREGAR DATO
{
    if(i == -1)
    {
        printf("Todos los espacios se encuentran ocupados.\n");
    }
    else
    {
    printf("\nIngrese el nombre del empleado: ");//NOMBRE
    fflush(stdin);
    scanf("%[^\n]",lista[i].nombre);
    printf("\nIngrese la edad del empleado: ");//EDAD
    scanf("%d",&lista[i].edad);
    printf("\nIngrese el dni del empleado: ");//DNI
    scanf("%d",&lista[i].dni);
    lista[i].estado = 1;//ESTADO
    }
}

void ordenaryMostrar(EPersona lista[], int cantidad)//ORDENAR Y MOSTRAR
{
    //----------------------------------------------------------ORDENAR
    int i,j;
    EPersona aux;
    for(i=0;i<cantidad;i++)
    {
        if(lista[i].estado == 1)
        {
            for(j=i+1;j<cantidad;j++)
            {
                if(lista[j].estado ==1)
                {
                    if(strcmp(lista[j].nombre,lista[i].nombre)<0)
                    {
                        aux=lista[i];
                        lista[i]=lista[j];
                        lista[j]=aux;
                    }
                }
            }
        }
    }
    //----------------------------------------------------------MOSTRAR
    for(i=0;i<cantidad;i++)
    {
        if(lista[i].estado == 1)
        {
            printf("\n\nNombre: %s\n",lista[i].nombre);
            printf("Edad: %d\n",lista[i].edad);
            printf("DNI: %d\n",lista[i].dni);
        }
    }
}

void borrarPersona(EPersona lista[],int cantidad)//BORRAR PERSONA
{
    int i;
    printf("\n");
    for(i=0;i<cantidad;i++)
    {
        if(lista[i].estado == 1)
        {
            printf("Espacio %d en memoria\tNombre:%s\n",i,lista[i].nombre);
        }
    }
    printf("Elija el espacio a borrar: ");
    scanf("%d",&i);
    lista[i].estado = 0;
}

void graficarEdad(EPersona lista[],int cantidad,int chico,int grande)
{
    int i;
    chicoC=0;
    medianoC=0;
    grandeC=0;
    //---------------CONSIGO LA CANTIDAD DE PERSONAS PARA CADA EDAD
    for(i=0;i<cantidad;i++)
    {
        if(lista[i].estado == 1)
        {
            if(lista[i].edad < chico)//JOVEN
            {
                chicoC++;
            }
            if(lista[i].edad <= grande && lista[i].edad >= chico)//JOVEN ADULTO
            {
                medianoC++;
            }
            if(lista[i].edad > grande)//ADULTO
            {
                grandeC++;
            }
        }
    }
    //---------------GRAFICO DE EDADES
    int max=0;
    int espacioBlancoChico=0;
    int espacioBlancoMediano=0;
    int espacioBlancoGrande=0;
    if(chicoC>max)
    {
        max = chicoC;
    }
    if(medianoC>max)
    {
        max = medianoC;
    }
    if(grandeC>max)
    {
        max = grandeC;
    }
    espacioBlancoChico = max - chicoC;
    espacioBlancoMediano = max - medianoC;
    espacioBlancoGrande = max - grandeC;
    printf("\n\n");
    for(i=max;i>0;i--)
    {
        if(espacioBlancoChico>0)
        {
            printf("  ");
        }
        else
        {
            printf(" *");
        }
        printf("\t");
        if(espacioBlancoMediano>0)
        {
            printf(" ");
        }
        else
        {
            printf(" *");
        }
        printf("\t");
        if(espacioBlancoGrande>0)
        {
            printf(" ");
        }
        else
        {
            printf(" *");
        }
        printf("\n");
    }
    printf("<%d\t%d-%d\t>%d\n",chico,chico,grande,grande);
}



