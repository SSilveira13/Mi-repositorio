#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "Employee.h"


int parserEmployee(FILE* pFile , ArrayList* pArrayListEmployee)
{
    Employee *employee;
    char cad1[128], cad2[128], cad3[128], cad4[128];
    int id,isEmpty;
    pFile = fopen("data.csv","r");
    if(pFile == NULL)
    {
        printf("ERROR, no se puede abrir el archivo...");
    }
    /*int cant;
    while(!feof(pFile))
    {*/
        printf("1");
        fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", cad1, cad2, cad3, cad4 );

        /*if(cant!=1)
        {
            if(feof(pFile))
                break;
            else
            {
                printf("Error");
                break;
            }
        }*/
        id = atoi(cad1);
        strcpy(employee->name,cad2);
        strcpy(employee->lastName,cad2);
        isEmpty = atoi(cad4);
        employee_setId(employee, id);
        printf("%s",employee->name);
    //}
    return 0;
}
