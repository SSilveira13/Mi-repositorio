#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dato;
    dato = sizeof(char);
    printf("%d\n",dato);
    dato = sizeof(int);
    printf("%d\n",dato);
    dato = sizeof(float);
    printf("%d\n",dato);
    return 0;
}
