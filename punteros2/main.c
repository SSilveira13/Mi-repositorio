#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "punteros.h"
#define CANTIDAD 3

int main(void)
{
    //char cad[]="hola";
    //mostrarCadena(cad);

    /*
    alumno auxiliarAlumno;
    alumno *punteroAlumno;
    punteroAlumno = &auxiliarAlumno;
    char auxiliarNombre[21];
    int auxiliarNota;

    printf("Ingrese nombre del aulmno: ");
    scanf("%s",auxiliarNombre);
    printf("\nIngrese la nota del aulmno: ");
    scanf("%d",&auxiliarNota);
    strcpy(punteroAlumno->nombre,auxiliarNombre);
    punteroAlumno->nota = auxiliarNota;
    printf("\n%s",auxiliarAlumno.nombre);
    printf("\n%d",auxiliarAlumno.nota);
    */

    int i,auxiliarNota;
    char auxiliarNombre[50];
    struct alumno arrayAlumnos[CANTIDAD];
    struct alumno* arrayPunterosAlumnos[CANTIDAD];
    for(i=0; i<CANTIDAD; i++)
    {
        // Copiamos la posición de memoria de cada elemento
        arrayPunterosAlumnos[i] = &arrayAlumnos[i];
        printf("\nIngrese el nombre: ");
        scanf("%s",auxiliarNombre);
        strcpy(arrayAlumnos[i].nombre, auxiliarNombre); //FALTARIA VALIDAR
        printf("\nIngrese la Nota: ");
        scanf("%i",&auxiliarNota);
        arrayAlumnos[i].nota = auxiliarNota; //FALTA VALIDAR
    }
    printf("/n-MOSTRAMOS EL SIN ORDENAR ARRAY-");
    for(i=0; i<CANTIDAD; i++)
    {
        printf("/n%s", arrayPunterosAlumnos[i]->nombre);
        printf("-%i",arrayPunterosAlumnos[i]->nota);
    }
    ordenar(arrayPunterosAlumnos , CANTIDAD);
    printf("/n-MOSTRAMOS EL ARRAY ORDENADO-");
    for(i=0; i<CANTIDAD; i++)
    {
        printf("/n%s", arrayPunterosAlumnos[i]->nombre);
        printf("-%i",arrayPunterosAlumnos[i]->nota);
    }

    return 0;
}
