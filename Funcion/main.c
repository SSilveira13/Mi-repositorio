#include <stdio.h>
#include <stdlib.h>
int suma(int,int);
int main()
{
    int n1,n2,rta;
    printf("Ingrese n1: ");
    scanf("%d",&n1);
    printf("Ingrese n2: ");
    scanf("%d",&n2);
    rta=suma(n1,n2);
    printf("Suma:%d",rta);
    return 0;
}

int suma(int nro1,int nro2){
    int res;
    res=nro1+nro2;
    return res;
}
