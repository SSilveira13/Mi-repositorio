#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"

int size;
int index;
Persona** lista,listaAux;

void persona_initLista(void)
{
    size = 10;
    index = 0;
    lista = (Persona**)malloc(sizeof(Persona*)*size);
}

void persona_addPersona(Persona* p)
{
    lista[index]=p;
    index++;
    if(index>=size)
    {
        printf("no hay mas lugar, redefinimos el array\r\n");
        size=size+10;
        lista = (Persona**)realloc(lista,sizeof(Persona*)*size);
    }
}

Persona* persona_newPersona(void)
{
    Persona* persona = (Persona*)malloc(sizeof(Persona));
    return persona;
}

int persona_setEdad(Persona* pPersona, int edad)
{
    if(edad>0)
    {
        pPersona->edad = edad;
        return 0; // OK
    }
    return 1; // error
}

int persona_setName(Persona* pPersona, char* pName)
{
    if(strlen(pName)>3)
    {
        strcpy(pPersona->nombre,pName);
        return 0;
    }
    return 1;
}

void persona_toString(Persona* pPersona)
{
    printf("\nNombre:%s – Edad:%d",pPersona->nombre,pPersona->edad);
}

int persona_getEdad(Persona* pPersona)
{
    return pPersona->edad;
}

char* persona_getNombre(Persona* pPersona)
{
    return pPersona->nombre;
}




char* preguntarNombre(char aux[20])
{
    printf("\nIngrese el nombre: ");
    scanf("%s",aux);
    return aux;
}

int preguntarEdad()
{
    int aux;
    printf("\nIngrese la edad: ");
    scanf("%d",&aux);
    return aux;
}

char preguntarSalir()
{
    char aux;
    printf("\nQuiere dejar de ingresar personas?<S/N>: ");
    scanf("%c",&aux);
    return aux;
}
