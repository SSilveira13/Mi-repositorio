#include <stdio.h>
#include <stdlib.h>
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

void employee_delete(Employee* this)
{


}

int employee_setId(Employee* this, int id)
{
    this->id=id+1;
    return 0;
}

int employee_getId(Employee* this)
{

    return 0;

}


