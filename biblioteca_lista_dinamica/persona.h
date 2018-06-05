#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

typedef struct
{
    int edad;
    char nombre[20];
}Persona;

void persona_initLista(void);

void persona_addPersona(Persona* p);

Persona* persona_newPersona(void);

int persona_setEdad(Persona* pPersona, int edad);

int persona_setName(Persona* pPersona, char* pName);

void persona_toString(Persona* pPersona);

int persona_getEdad(Persona* pPersona);

char* persona_getNombre(Persona* pPersona);


char* preguntarNombre(char aux[20]);
int preguntarEdad();
char preguntarSalir();


#endif

