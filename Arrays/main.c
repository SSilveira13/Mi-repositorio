#include <stdio.h>
#include <stdlib.h>

void main(void)
{
int v[5],i;
for (i=0;i<5;i++)
{
printf("Ingrese valor a cargar en el vector");
scanf("%d",&v[i]);
}
for (i=0;i<5;i++)
{
    printf("%d",v[i]);
}
}
