#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "Empleado.h"

int parser_parseEmpleados(FILE* pFile, ArrayList* listaEmpleados)
{
    Empleado* empleado;
    empleado->id = 0;
    int id,horasTrabajadas,retorno;
    char cad1[128], cad2[128], cad3[128];
    pFile = fopen("data.csv","r");
    if(pFile != NULL)
    {
        int longitud = 1;
        while(feof(pFile)==0)
        {
            fseek(pFile,longitud,SEEK_SET);
            fscanf(pFile, "%[^,],%[^,],%[^\n]\n", cad1, cad2, cad3);
            id = atoi(cad1);
            empleado->id = id;
            strcpy(empleado->nombre,cad2);
            horasTrabajadas = atoi(cad3);
            empleado->horasTrabajadas = horasTrabajadas;
            if(listaEmpleados->add(listaEmpleados,/*(void**)*/empleado))
            {
                printf("bien\n");
                system("pause");
            }
            else
            {
                printf("mal: %d\n",longitud);
            }
            longitud++;
        }
        printf("1");
        retorno = longitud;
    }
    else
    {
        retorno = 0;
    }
    return retorno; //1=OK y 0=Error
}

