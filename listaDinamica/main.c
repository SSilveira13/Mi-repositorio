#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "preguntas.h"

int main()
{
    int size = 10;
    int index=0;
    Persona** lista = (Persona**)malloc(sizeof(Persona*)*size);

    do {

        Persona* persona = (Persona*)malloc(sizeof(Persona));
        preguntarNombre(persona->nombre);
        persona->edad = preguntarEdad();
        lista[index] = persona;
        index++;


        if(index>=size)
        {
            // incrementamos el tamaño del array
            size+=10;
            lista = realloc(lista,sizeof(Persona*)*size);
        }

    }while(preguntarSalir()!='S');

    return 0;
}
