#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void preguntarNombre(char nombre[101])
{
    char aux[101];
    printf("Ingrese un nombre: ");
    fflush(stdin);
    scanf("%s",aux);
    strcpy(nombre,aux);
}

int preguntarEdad()
{
    int aux;
    printf("Ingrese una edad: ");
    fflush(stdin);
    scanf("%d",&aux);
    return aux;
}

char preguntarSalir()
{
    printf("1");
    char aux;
    printf("Quiere salir<S/N>: ");
    fflush(stdin);
    scanf("%c",&aux);
    return aux;
}
