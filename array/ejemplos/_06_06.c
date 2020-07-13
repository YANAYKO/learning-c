// sumando los elementos de un array
#include <stdio.h>
#define SIZE 12

// la funcion main inicia la ejecucion del programa
int main(void)
{
    // usa una lista de inicializadores para inicializar el array
    int a[SIZE] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
    int total = 0; // suma del array

    // sumar contenido del array a
    for (size_t i = 0; i < SIZE; ++i)
    {
        total += a[i];
    }

    printf("La suma de los elementos del array es: %d\n", total);

    return 0;
}