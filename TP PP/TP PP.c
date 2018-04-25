#include <stdio.h>
#include <stdlib.h>
#include "TP PP.h"

void inicializar(eProducto lista[], int cantidad)
{
    int i;
    for(i=0; i<cantidad; i++)
    {
        lista[i].estado = 0;
    }
}

void agregarProducto(eProducto lista[], int cantidad)
{
    int i;
    printf("\n");
    for(i=0;i<cantidad;i++)
    {
        if(lista[i].estado == 0)
        {
            //printf("%d",i);
            printf("Ingrese descripsion: ");
            fflush(stdin);
            scanf("%s",lista[i].descripcion);
            printf("\nIngrese codigo: ");
            fflush(stdin);
            scanf("%d",&lista[i].codigo);
            printf("\nIngrese importe: ");
            fflush(stdin);
            scanf("%f",&lista[i].importe);
            printf("\nIngrese cantidad: ");
            fflush(stdin);
            scanf("%d",&lista[i].cantidad);
            lista[i].estado = 1;
            break;
        }
    }
}

void modificarProducto(eProducto lista[])
{
    char seguir = 's';
    int i,p,opcion,indice;
    printf("\nLos productos disponibles a modificar son: ");
    for(i=0;i<20;i++)
    {
        if(lista[i].estado == 1)
        {
            printf("\nCodigo: %d\t Descripcion: %s\t Cantidad: %d\t Importe: %2.f\n",lista[i].codigo,lista[i].descripcion,lista[i].cantidad,lista[i].importe);
        }
    }
    printf("\nIngrese el codigo del producto a modificar: ");
    scanf("%d",&p);

    for(i=0;i<20;i++)
    {
        indice = -1;
        if(lista[i].codigo == p)
        {
            indice = i;
            break;
        }
    }
    printf("\n");
    if(indice != -1)
    {
        while(seguir=='s')
        {
            printf("1- Codigo del producto: %d\n",lista[indice].codigo);
            printf("2- Descripcion del producto: %s\n",lista[indice].descripcion);
            printf("3- Importe del producto: %.2f\n",lista[indice].importe);
            printf("4- Cantidad del producto: %d\n\n",lista[indice].cantidad);
            printf("5- Terminar de modificar.\n");

            scanf("%d",&opcion);


            switch(opcion)
            {
                case 1://CODIGO
                    printf("\nIngrese el nuevo codigo del producto: ");
                    scanf("%d",&lista[indice].codigo);
                    break;
                case 2://DESCRIPCION
                    printf("\nIngrese la nueva descripcion del producto: ");
                    fflush(stdin);
                    scanf("%s",lista[indice].descripcion);
                    break;
                case 3://IMPORTE
                    printf("\nIngrese el nuevo importe del producto: ");
                    scanf("%f",&lista[indice].importe);
                    break;
                case 4://CANTIDAD
                    printf("\nIngrese la nueva cantidad del producto: ");
                    scanf("%d",&lista[indice].cantidad);
                    break;
                case 5://TERMINAR
                    seguir = 'n';
                    break;
            }
        }
        printf("\nModificacion finalizada.\n");
    }
    else
    {
        printf("\nError no hay un producto con este codigo.\n");
    }
}

void borrarProducto(eProducto lista[])
{
    int indice,p,i;
    printf("\nLos productos disponibles a borrar son: ");
    for(i=0;i<20;i++)
    {
        if(lista[i].estado == 1)
        {
            printf("\nCodigo: %d\t Descripcion: %s\t Cantidad: %d\t Importe: %2.f\n",lista[i].codigo,lista[i].descripcion,lista[i].cantidad,lista[i].importe);
        }
    }
    printf("\nIngrese el codigo del producto a borrar: ");
    scanf("%d",&p);

    for(i=0;i<20;i++)
    {
        indice = -1;
        if(lista[i].codigo == p)
        {
            indice = i;
            break;
        }
    }

    if(indice != -1)
    {
        printf("\nEsta seguro que quiere borrar el producto?<s/n> ");
        char respuesta;
        do
        {
            scanf("%c",&respuesta);

        }while(respuesta != 's' && respuesta != 'n');
        if(respuesta == 's')
        {
            printf("El producto fue eliminado.\n");
            lista[indice].estado = 0;
        }
        else
        {
            printf("El producto no fue eliminado.\n");
        }
    }
    else
    {
        printf("\nError no hay un producto con este codigo");
    }
}

void listarProductos(eProducto lista[])
{

}

