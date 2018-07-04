#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Empleado.h"
#include "ArrayList.h"

void em_calcularSueldo(ArrayList* lista,Empleado* empleados)
{
    int i,longitud = lista->len(lista);

    for(i=0;i<longitud;i++)
    {
        empleados = lista->get(lista,i);
        if(empleados->horasTrabajadas >= 176)
        {
            empleados->sueldo = empleados->horasTrabajadas * 180;
        }
        else if(empleados->horasTrabajadas >= 208 && empleados->horasTrabajadas <= 177)
        {
            empleados->sueldo = empleados->horasTrabajadas * 270;
        }
        else if(empleados->horasTrabajadas >= 240 && empleados->horasTrabajadas <= 209)
        {
            empleados->sueldo = empleados->horasTrabajadas * 360;
        }
    }
}

int menu()
{
    int opcion;
    system("cls");
    printf("1. Parse del archivo data.csv\n");
    printf("2. Calcular sueldos\n");
    printf("3. Crear archivo info\n");
    printf("4. Salir\n\n");
    scanf("%d",&opcion);
    return opcion;
}
