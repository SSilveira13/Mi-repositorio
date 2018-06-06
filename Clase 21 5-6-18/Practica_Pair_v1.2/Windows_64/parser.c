#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int parserEmployee(FILE* pFile , ArrayList* pArrayListEmployee)
{
    Employee employee;
    pFile = fopen("data.csv","r");
    if(pFile == NULL)
    {
        pFile = fopen("data.csv","w");
        if(pFile == NULL)
        {
            printf("Error del archivo data.csv");
            exit(1);
        }
    }
    int cant;
    while(!feof(pFile))
    {
        printf("1");
        cant = fread(&employee,sizeof(Employee)*8,1,pFile);
        if(cant!=1)
        {
            if(feof(pFile))
                break;
            else
            {
                printf("Error");
                break;
            }
        }
        printf("%s",employee.name);
    }
    return 0;
}
