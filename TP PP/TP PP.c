void inicializar(EProducto lista[], int cantidad)
{
    int i;
    for(i=0; i<cantidad; i++)
    {
        lista[i].estado = 0;
    }
}

void agregarProducto(EProducto lista[], int cantidad)
{
    int i;
    printf("\n");
    for(i=0;i<cantidad;i++)
    {
        if(lista[i].estado == 0)
        {
            printf("Ingrese descripsion: ");
            fflush(stdin);
            scanf("%s",lista[i].descripcion);
            printf("\nIngrese codigo: ");
            scanf("%d",lista[i].codigo);
            printf("\nIngrese importe: ");
            scanf("%f",lista[i].importe);
            printf("\nIngrese cantidad: ");
            scanf("%d",lista[i],cantidad);
            lista[i].estado = 1;
            break;
        }
    }
}

void modificarProducto(EProducto lista[])
{
    char seguir = 's';
    int i,p,opcion;
    printf("\nLos productos disponibles a modificar son: ");
    for(i=0;i<cantidad;i++)
    {
        if(lista[i].estado == 1)
        {
            printf("\nIndice: %d\tCodigo: %d\t Descripcion: %s\n",i,lista[i].codigo,lista[i].descripcion);
        }
    }
    printf("\nIngrese el indice del producto a modificar: ");
    scanf("%d",&p);
    printf("\n");
    while(seguir=='s')
    {
        printf("1- Codigo del producto: %d\n",lista[p].codigo);
        printf("2- Descripcion del producto: %s\n",lista[p].descripcion);
        printf("3- Importe del producto: %.2f\n",lista[p].importe);
        printf("4- Cantidad del producto: %d\n\n",lista[p].cantidad);
        printf("5- Terminar de modificar.\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("\nIngrese el nuevo codigo")
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }
}





