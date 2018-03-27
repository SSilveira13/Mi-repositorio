#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, factorial=1, i;
    printf("Ingrese un numero:");
    scanf("%d",&numero);
    for(i=numero;i>0;i--){
        factorial=factorial*i;
    }
    printf("El factorial del numero %d",numero);
    printf(" es %d", factorial);
    return 0;
}
