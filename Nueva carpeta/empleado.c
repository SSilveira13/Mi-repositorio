#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"

void inicializar(EEmpleado emp[], int cantidad){
    int i;

    for(i=0; i<cantidad; i++){
        emp[i].estado = 0;
    }
}

void hardCode(ESector sectores[]){
    sectores[0].id = 1;
    strcpy(sectores[0].descripcion, "RRHH");
    sectores[0].estado = 1;

    sectores[1].id = 2;
    strcpy(sectores[1].descripcion, "Sistemas");
    sectores[1].estado = 1;

    sectores[2].id = 3;
    strcpy(sectores[2].descripcion, "Administracion");
    sectores[2].estado = 1;

    sectores[3].id = 4;
    strcpy(sectores[3].descripcion, "Compras");
    sectores[3].estado = 1;

    sectores[4].id = 5;
    strcpy(sectores[4].descripcion, "Deposito");
    sectores[4].estado = 1;
}


void alta(EEmpleado emp[], int cantidad){
    int i;

    for(i=0; i<cantidad; i++){
        if(emp[i].estado == 0){
            printf("Legajo: ");
            scanf("%d", &emp[i].legajo);

            printf("Nombre: ");
            fflush(stdin);
            scanf("%s", emp[i].nombre);

            printf("Salario: ");
            scanf("%f", &emp[i].salario);

            printf("Dia: ");
            scanf("%d", &emp[i].fn.dia);

            printf("Mes: ");
            scanf("%d", &emp[i].fn.mes);

            printf("A�o: ");
            scanf("%d", &emp[i].fn.anio);

            emp[i].estado = 1;

            break;
        }
    }
}

void listar(EEmpleado emp[], int cantidad){
    int i;

    printf("Legajo\tNombre\t\t\tFechaNac\tSalario\n\n");

    for(i=0; i<cantidad; i++){
        if(emp[i].estado == 1){
            printf("%d\t%s\t\t\t%d/%d/%d\t%.2f\n", emp[i].legajo, emp[i].nombre, emp[i].fn.dia, emp[i].fn.mes, emp[i].fn.anio, emp[i].salario);
        }
    }
}



