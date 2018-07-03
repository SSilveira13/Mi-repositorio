#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Empleado.h"
#include "ArrayList.h"
#include "Parser.h"

int generarArchivoSueldos(char* fileName,ArrayList* listaEmpleados);

int main()
{
    ArrayList* listaEmpleados;// Definir lista de empleados
    Empleado* personal;
    listaEmpleados = al_newArrayList();// Crear lista empledos
    FILE* pFile;
    int opcion,flagParse = 0,flagCalc = 0;
    char seguir = 's';
    while(seguir=='s')
    {

        opcion = menu();

        switch(opcion)
        {
        case 1:// Leer empleados de archivo data.csv
                if(parser_parseEmpleados("data.csv",listaEmpleados)>0)
                {
                    printf("Los datos de los empleados se almacenaron(Total: %d)\n",listaEmpleados->len(listaEmpleados));
                    flagParse = 1;
                }
                else
                    printf("Error leyendo empleados\n");
                break;
        case 2:// Calcular sueldos
                if(flagParse == 1)
                {
                    printf("Calculando sueldos de empleados\n");
                    //al_map(listaEmpleados,em_calcularSueldo);
                    flagCalc = 1;
                }
                else
                {
                    printf("Error, tiene que leer los datos primero\n");
                }
                break;

        case 3:// Generar archivo de salida
                if(flagCalc == 1)
                {
                    if(generarArchivoSueldos("sueldos.csv",listaEmpleados)==1)
                    {
                        printf("Archivo generado correctamente\n");
                    }
                    else
                        printf("Error generando archivo\n");
                }
                else
                {
                    printf("Error, tiene que leer los datos primero y calcular los sueldos\n");
                }
                break;
        case 4://Salir
                seguir = 'n';
                break;
        }
        printf("\n");
        //system("pause");

    }
    return 0;
}

int generarArchivoSueldos(char* fileName,ArrayList* listaEmpleados)
{
    return 1;
}
