// passando arrays y elementos de arrays individuales a funciones

#include <stdio.h>
#define SIZE 5

// prototipos de funciones
void modifyArray(int b[], size_t size);
void modifyElement(int e);

// funcion main inicia la ejecucion del programa
int main(void)
{
    int a[SIZE] = {0, 1, 2, 3, 4}; // inicializa el array

    puts("Efectos de pasar un array entero por referencia:\n\nLos valores del array original son:");

    // mostrar el array original
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%3d", a[i]);
    }

    puts(""); // nueva linea

    modifyArray(a, SIZE); // paso del array "a" a modifyArray por referencia
    puts("Los nuevos valores del array modificado son: ");

    // mostrar array modificado
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%3d", a[i]);
    }

    // mostrar el valor de a[3]
    printf("\n\nEfectos de pasar un elemento de array por valor:\n\nEl valor de a[3] es %d\n", a[3]);

    modifyElement(a[3]);

    // mostrar valor de a[3]
    printf("El valor de a[3] es %d\n", a[3]);
}

// en la funcion modifyArray, "b" apunta al array original "a" en memoria
void modifyArray(int b[], size_t size)
{
    // multiplicar cada elemento por 2
    for (size_t j = 0; j < size; ++j)
    {
        b[j] *= 2; // modifica el array original
    }
}

// en la funcion modifyElement, "e" es una copia local del elemento a[3] pasado desde main
void modifyElement(int e)
{
    // multiplicar el parametro e por 2
    printf("Valor en modifyElement es %d\n", e *= 2);
}