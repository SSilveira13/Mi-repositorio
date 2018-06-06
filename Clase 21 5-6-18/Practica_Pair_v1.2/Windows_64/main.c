#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
    char seguir = 's';
    int opcion;

    ArrayList* lista;
    Employee* employee;

    lista = al_newArrayList();

    FILE* pFile;

    int id = 0;

    while(seguir=='s')
    {
        system("cls");
        printf("1. Parse del archivo data.csv\n");
        printf("2. Listar Empleados\n");
        printf("3. Ordenar por nombre\n");
        printf("4. Agregar un elemento\n");
        printf("5. Elimina un elemento\n");
        printf("6. Listar Empleados (Desde/Hasta)\n\n");
        printf("7. Salir\n\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1://Parse del archivo data.csv
                parserEmployee(pFile,lista);
                break;
            case 2://Listar Empleados

                break;
            case 3://Ordenar por nombre

                break;
            case 4://Agregar un elemento
                employee = employee_new();
                employee_setId(employee,id);
                lista->add(lista,employee);
                id++;
                break;
            case 5://Elimina un elemento

                break;
            case 6://Listar Empleados (Desde/Hasta)

                break;
            case 7://Salir
                seguir = 'n';
                break;
            default://Error
                printf("No existe la opcion");
                break;
        }
        printf("\n");
        system("pause");
    }
    return 0;
}
