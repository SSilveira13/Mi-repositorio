#include <stdio.h>
#include <stdlib.h>
#include "Person.h"

int main()
{
    Person* personArray[50];
    int i,edad;
    for(i = 0; i < 3; i++)
    {
        personArray[i] = person_new(i,i);
    }
    for(i = 0; i < 3; i++)
    {
        printf("Ingrese edad: ");
        scanf("%d",&edad);
        person_setAge(personArray[i],edad);
    }
    for(i = 0; i < 3; i++)
    {
        printf("\nAge: %2d",person_getAge(personArray[i]));
    }
    scanf(" ");
    return 0;
}

