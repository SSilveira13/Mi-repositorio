#include <stdio.h>
#include <stdlib.h>

struct fecha { int dia,mes,anio;};
struct gente {
char nombre[20];
struct fecha f_nacimiento;
};
void main(void)
{
struct gente pers;
struct fecha fn;
printf("Ingrese nombre");
gets(pers.nombre);
printf("Ingrese dia de nacimiento");
scanf("%d",&fn.dia);
printf("Ingrese mes de nacimiento");
scanf("%d",&fn.mes);
printf("Ingrese a¤o de nacimiento");
scanf("%d",&fn.anio);
pers.f_nacimiento=fn;
}
