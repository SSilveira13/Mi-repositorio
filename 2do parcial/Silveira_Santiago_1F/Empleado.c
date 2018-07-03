#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Empleado.h"

void em_calcularSueldo(void* p)
{

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
