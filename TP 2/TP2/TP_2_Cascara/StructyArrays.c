int agregarPersona(int i,EPersona lista[])//AGREGAR PERSONA
{
    int i;
    if(i == 21)
    {
        printf("Todos los espacios se encuentran ocupados.\n");
        return 0;
    }
    printf("\nIngrese el nombre del empleado: ");//NOMBRE
    fflush(stdin);
    scanf("%[^\n]",lista[i].nombre);
    printf("\nIngrese la edad del empleado: ");//EDAD
    scanf("%d",lista[i].edad);
    printf("\nIngrese el salario del empleado: ");//DNI
    scanf("%d",lista[i].dni);
    lista[i].estado = 1;//ESTADO
}

int obtenerEspacioLibre(EPersona lista[])//ESPACIO LIBRE DE LA LISTA
{
    int retorno,i;
    for(i=0;i<20;i++)
    {
        if(lista[i].estado == 0)
        {
            retorno = i;
            break;
        }
    }
    if(i == 20)
    {
        retorno = 21;
    }
    return retorno;
}

int ordenaryMostrar(EPersona lista[])//ORDENAR Y MOSTRAR
{
    //----------------------------------------------------------ORDENAR
    for(i=0;i<20;i++)
    {
        if(lista[i].estado == 1)
        {
            for(j=i+1;j<20;j++)
            {
                if(lista[j].estado ==1)
                {
                    if(strcmp(lista[j].nombre,lista[i].nombre)<0)
                    {
                        aux=lista[i];
                        lista[i]=lista[j];
                        lista[j]=aux;
                    }
                }
            }
        }
    }
    //----------------------------------------------------------MOSTRAR
    for(i=0;i<20;i++)
    {
        if(lista[i].estado == 1)
        {
            printf("\n\nNombre: %s\n",lista[i].nombre);
            printf("Edad: %d\n",lista[i].edad);
            printf("DNI: %d\n",lista[i].dni);
        }
    }
}

int borrarPersona(EPersona lista[])
{
    int i;
    printf("\n");
    for(i=0;i<20;i++)
    {
        if(lista[i].estado == 1)
        {
            printf("Espacio %d en memoria\tNombre:%s\n",i,lista[i].nombre)
        }
    }
    printf("Elija el espacio a borrar: ");
    scanf("%d",&i);

}
