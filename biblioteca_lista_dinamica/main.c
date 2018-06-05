#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"

int main()
{
    persona_initLista();

    do{
        Persona* persona = persona_newPersona();

        char nombreAux[20];
        preguntarNombre(nombreAux);
        if(persona_setName(persona,nombreAux))
            printf("El nombre no es valido");

        int edadAux = preguntarEdad();
        if(persona_setEdad(persona,edadAux))
            printf("La edad no es válida");

        persona_addPersona(persona);

        persona_toString(persona);

    }while(preguntarSalir()!='S');

    return 0;
}
