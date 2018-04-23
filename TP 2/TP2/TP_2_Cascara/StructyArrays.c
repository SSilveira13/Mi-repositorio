int agregarPersona(int i,EPersona lista[])//AGREGAR PERSONA
{
    printf("\nIngrese el nombre del empleado: ");//NOMBRE
    fflush(stdin);
    scanf("%[^\n]",lista[i].nombre);
    printf("\nIngrese la edad del empleado: ");//EDAD
    scanf("%d",lista[i].edad);
    printf("\nIngrese el salario del empleado: ");//SALARIO
    scanf("%d",lista[i].dni);
    lista[i].estado = 1;//ESTADO
}

int obtenerEspacioLibre(EPersona lista[])
{
    int retorno,i;
    for(i=0;i<20;i++)
    {
        if(lista[i].estado == 0)
        {
            retorno = i;
        }
    }
    retorno = 21;
    return retorno;
}

void ordenaryMostrar()//ORDENAR Y MOSTRAR
{
    //----------------------------------------------------------ORDENAR
    for(i=0;i<CANT;i++)
    {
        if(Personas[i].flag == 1)
        {
            for(j=i+1;j<CANT;j++)
            {
                if(Personas[j].flag==1)
                {
                    if(strcmp(Personas[j].nombre,Personas[i].nombre)<0)
                    {
                        aux=Personas[i];
                        Personas[i]=Personas[j];
                        Personas[j]=aux;
                    }
                }
            }
        }
    }
    //----------------------------------------------------------MOSTRAR
    for(i=0;i<CANT;i++)
    {
        if(Personas[i].flag == 1)
        {
            printf("\n\nNombre: %s\n",Personas[i].nombre);
            printf("Edad: %d\n",);
            printf("Salario: %.2f\n",Personas[i].salario);
            printf("Legajo: %d\n\n",Personas[i].legajo);
        }
    }
}
