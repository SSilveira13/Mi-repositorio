#ifndef PREGUNTAS_H_INCLUDED
#define PREGUNTAS_H_INCLUDED

typedef struct{
    int edad;
    char nombre[20];
}Persona;

void preguntarNombre(char nombre[101]);

int preguntarEdad();

char preguntarSalir();

#endif
