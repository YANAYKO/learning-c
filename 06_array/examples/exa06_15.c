// ordenando los valores de un array en orden ascendente

#include <stdio.h>
#define SIZE 10

// la funcion main inicia la ejecucion del programa
int main(void)
{
    // inicializar a
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    puts("Datos de los items en el orden original");

    // salida original del array
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }

    // buble sort
    // loop para controlar el numero de pasos
    for (unsigned int pass = 1; pass < SIZE; ++pass)
    {
        // lopp para controlar el numero de comparaciones por pass
        for (size_t i = 0; i < SIZE - 1; ++i)
        {
            // comparar elementos adyacentes e intercambiarlos si el primero es mayor que el segundo
            if (a[i] > a[i + 1])
            {
                int tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
            }
        }
    }

    puts("\nDatos de los items en orden ascendente");

    // mostrar array ordenado
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }

    puts("");
    return 0;
}