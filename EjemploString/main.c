#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nombre [31];
    printf("Nombre: ");
    fflush(stdin);
    scanf("%s",nombre);
    printf("\nNombre ingresado: %s",nombre);
    return 0;
}
