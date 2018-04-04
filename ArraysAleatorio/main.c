#include <stdio.h>
#include <stdlib.h>

void main(void)
{
int v[5],pos,i;
char seguir;
for(i=0;i<5;i++)
v[i]=0; //inicializamos vector
do
{
    printf("Ingrese posici¢n ");
    scanf("%d",&pos);
    if(v[pos]==0)
    {
        printf("Ingrese valor a cargar en el vector ");
        scanf("%d",&v[pos]);
    }
    else{
        printf("La posicion se encuentra ocupada");
    }
    printf("Desea ingresar otro dato S/N? ");
    fflush(stdin);
    scanf("%c",&seguir);
}while(seguir=='s');
    for(i=0;i<5;i++)
    {
        if(v[i]==0)
        {
            printf("\nEl espacio %d se encuentra LIBRE",i);
        }
        else
        {
            printf("\nEl espacio %d tiene el dato %d",i,v[i]);
        }
    }
}
