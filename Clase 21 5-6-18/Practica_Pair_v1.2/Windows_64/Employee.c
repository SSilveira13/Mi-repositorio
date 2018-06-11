#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    return 0;
}


void employee_print(Employee* this)
{
    printf("\n");
    printf("ID: %d\tNombre: %s\tApellido: %s\tEstado: %d\n",this->id,this->name,this->lastName,this->isEmpty);
}


Employee* employee_new(void)
{
    Employee* returnAux = NULL;
    returnAux =(Employee*)malloc(sizeof(Employee));
    if(returnAux == NULL)
        exit(1);
    return returnAux;
}

void employee_delete(Employee* this, int index)
{
    this[index]->isEmpty = 0;
}

int employee_getId(Employee* this, int index)
{
    int id;
    id = this[index]->id;
    return id;
}

int employee_getName(Employee* this, int index, char* aux[51])
{
    strcpy(aux, this[index]->name);
    return 0;
}

int employee_getLname(Employee* this, int index, char* aux[51])
{
    strcpy(aux, this[index]->lastName);
    return 0;
}

int employee_setName(Employee* this, char name[51])
{
    printf("Ingrese el nombre: ");
    scanf("%s",name);
    strcpy(this->name,name);
    return 0;
}

int employee_setLname(Employee* this, char lastName[51])
{
    printf("Ingrese el apellido: ");
    scanf("%s",lastName);
    strcpy(this->lastName,lastName);
    return 0;
}

int employee_setId(Employee* this, int id)
{
    this->id=id+1;
    return 0;
}
