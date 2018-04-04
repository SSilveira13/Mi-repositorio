#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5
void main()
{
  int i, edad[CANTIDAD], legajo[CANTIDAD];
    float  sueldo[CANTIDAD];
for (i=0;i<CANTIDAD;i++)
{
    printf("Ingrese edad para el legajo %d: ",i+1);
    scanf("%d",&edad[i]);
    printf("Ingrese sueldo para el legajo %d: ",i+1);
    scanf("%f",&sueldo[i]);
}
for (i=0;i<CANTIDAD;i++)
{
    printf("\nLegajo: %d",i+1);
    printf("\nEdad: %d",edad[i]);
    printf("\nSueldo: %f",sueldo[i]);
}
}

