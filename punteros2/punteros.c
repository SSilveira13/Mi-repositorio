#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarCadena(char* ptr)
{
    while(*ptr != '\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
}

void ordenar(struct alumno* arrayPunterosAlumnos[], int longitudArray)
{
    struct alumno* punteroAuxiliarAlumno;
    int i,j;
    for(i = 0; i < longitudArray -1 ; i++)
    {
        for(j = i+1; j < longitudArray ; j++)
        {
            if(arrayPunterosAlumnos[i]->nota > arrayPunterosAlumnos[j]->nota)
            {
                punteroAuxiliarAlumno = arrayPunterosAlumnos[i];
                arrayPunterosAlumnos[i] = arrayPunterosAlumnos[j];
                arrayPunterosAlumnos[j] = punteroAuxiliarAlumno;
            }
        }
    }
}
