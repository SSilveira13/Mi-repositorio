#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{
    int codigo;
    char descripcion[51];
    float importe;
    int cantidad;
    int estado;
}eProducto;

void inicializar(eProducto lista[], int);

void agregarProducto(eProducto lista[], int);

void modificarProducto(eProducto lista[]);

void borrarProducto(eProducto lista[]);

void listarProductos(eProducto lista[]);

#endif // FUNCIONES_H_INCLUDED
