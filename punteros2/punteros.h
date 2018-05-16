#ifndef PUNTEROS_H_INCLUDED
#define PUNTEROS_H_INCLUDED
/*
typedef struct{
    char nombre[21];
    int nota;
}alumno;
*/
struct alumno{
    char nombre[50];
    int nota;
};

void mostrarCadena(char*);

void ordenar(struct alumno *arrayPunterosAlumnos[3], int longitudArray);

#endif
