#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{
    int codigo;
    char descripcion[51];
    float importe;
    int cantidad;
    int estado;
}EProducto;

void inicializar(EProducto lista[], int);

void agregarProducto(EProducto lista[], int);

void modificarProducto(EProducto lista[]);

#endif // FUNCIONES_H_INCLUDED
