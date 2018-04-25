#include <stdio.h>
#include <stdlib.h>
#include "TP PP.h"

int main()
{
    char seguir = 's';
    int opcion;

    eProducto lista[20],aux;

    inicializar(lista,20);

    while(seguir=='s')
    {
        printf("1- Agregar producto\n");
        printf("2- Modificar producto\n");
        printf("3- Borrar producto\n");
        printf("4- Listar productos\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1://AGREGAR
                agregarProducto(lista,20);
                break;
            case 2://MODIFICAR
                modificarProducto(lista);
                break;
            case 3://BORRAR
                borrarProducto(lista);
                break;
            case 4://LISTAR
                break;
            case 5://SALIR
                seguir = 'n';
                break;
        }
    }
    return 0;
}
