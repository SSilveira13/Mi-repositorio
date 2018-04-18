#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 20

typedef struct {int dia,mes,anio;}FechaNacimiento;

typedef struct
{
    char nombre[31];
    float salario;
    int legajo;
    FechaNacimiento fecha;
    int flag;
}Empleado;

int main()
{
    int i,j,f;
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        Empleado Personas[CANT],aux;

        for(f=0;f<CANT;f++)
        {
            Personas[f].flag=0;
        }

        printf("1- Agregar persona\n");
        printf("2- Ordenar personas alfabeticamente\n");
        printf("3- Mostrar lista en pantalla\n");
        printf("4- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1://AGREGAR
                for(i=0;i<CANT;i++)
                {
                    if(Personas[i].flag==0)
                    {
                        printf("\nIngrese el nombre del empleado: ");//NOMBRE
                        fflush(stdin);
                        scanf("%[^\n]",Personas[i].nombre);
                        printf("\nIngrese el dia de nacimiento del empleado: ");//DIA
                        scanf("%d",&Personas[i].fecha.dia);
                        printf("\nIngrese el mes de nacimiento del empleado: ");//MES
                        scanf("%d",&Personas[i].fecha.mes);
                        printf("\nIngrese el año de nacimiento del empleado: ");//AÑO
                        scanf("%d",&Personas[i].fecha.anio);
                        printf("\nIngrese el salario del empleado: ");//SALARIO
                        scanf("%f",&Personas[i].salario);
                        Personas[i].legajo = i;//LEGAJO
                        Personas[i].flag = 1;//FLAG
                        printf("flag: %d\n",Personas[i].flag);
                        break;
                    }
                }
                break;
            case 2://ORDENAR
                for(i=0;i<CANT;i++)
                {
                    if(Personas[i].flag==1)
                    {
                        for(j=i+1;j<CANT;j++)
                        {
                            if(Personas[j].flag==1)
                            {
                                if(strcmp(Personas[i].nombre,Personas[j].nombre)<0)
                                {
                                aux=Personas[i];
                                Personas[i]=Personas[j];
                                Personas[j]=aux;
                                }
                            }
                        }
                    }
                }
                printf("\n\nSe ordenò la lista alfabeticamente.\n");
                break;
            case 3://MOSTRAR
                for(i=0;i<CANT;i++)
                {
                    printf("llego\n");
                    if(Personas[i].flag==1)
                    {
                    printf("\n\nNombre: %s\n",Personas[i].nombre);
                    printf("Fecha de nacimiento: %d/%d/%d\n",Personas[i].fecha.dia,Personas[i].fecha.mes,Personas[i].fecha.anio);
                    printf("Salario: %f",Personas[i].salario);
                    printf("Legajo: %d",Personas[i].legajo);
                    }
                }
                break;
            case 4://SALIR
                seguir = 'n';
                break;
        }
    }
    return 0;
}
