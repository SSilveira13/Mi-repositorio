#include <stdio.h>
#include <stdlib.h>

struct Agenda {
    char nombre[31];
    int telefono;
};


int main()
{
    char continuar='s';
    int i,cantidad=2;
    struct Agenda Agn[cantidad+1];

    for(i=1;i<cantidad+1;i++)
    {
        printf("\nIngrese el nombre: ");
        scanf("%[^\n]",Agn[i].nombre);
        printf("\nIngrese numero de telefono: ");
        scanf("%d",&Agn[i].telefono);
        fflush(stdin);
    }

    do
    {
        int contacto;
        printf("\nIngrese el numero asignado a un contacto: ");
        scanf("%d",&contacto);

        printf("\nEl contacto %d se llama %s y su numero telefonico es: %d\n",contacto,Agn[contacto].nombre,Agn[contacto].telefono);
        fflush(stdin);
        printf("\nIngrese s para continuar: ");
        scanf("%c",&continuar);
    }while(continuar=='s');

    return 0;
}
