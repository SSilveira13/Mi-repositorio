#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nombre[31];
    char apellido[31];
    char NombreyApellido[61];

    printf("Nombre: ");
    fflush(stdin);
    scanf("%[^\n]",nombre);
    strlwr(nombre);
    nombre[0]=toupper(nombre[0]);

    printf("Apellido: ");
    fflush(stdin);
    scanf("%s",apellido);
    strlwr(apellido);
    apellido[0]=toupper(apellido[0]);

    strcpy(NombreyApellido,nombre);
    strcat(NombreyApellido," ");
    strcat(NombreyApellido,apellido);
    printf("Nombre y apellido ingresado: %s",NombreyApellido);
    return 0;
}
