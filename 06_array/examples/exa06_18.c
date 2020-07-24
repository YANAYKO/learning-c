// busqueda lineal en una array
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

// prototipo de funcion
size_t busquedaLineal(const int array[], int key, size_t size);

// la funcion main inicia la ejecucion del programa
int main(void)
{
    int a[SIZE]; // crea un array a

    // crear algunos datos
    for (size_t x = 0; x < SIZE; ++x)
    {
        a[x] = 2 * x;
    }

    printf("Ingresar una clave de tipo entero para buscar: ");
    int keyBuscar; // valor para localizar en el array a
    scanf("%d", &keyBuscar);

    // intentar localizar keyBuscar en el array a
    size_t index = busquedaLineal(a, keyBuscar, SIZE);

    // mostrar resultados
    if (index != -1)
        printf("Valor encontrado en el indice %d\n", index);
    else
        puts("Valor no encontrado");

    return EXIT_SUCCESS;
}
/*
    comparar key con cada elemento del array hasta localizarlo  o
    hasta que el final del array es alcanzado, retorna el indice
    del elemento si key es encontrado o -1 si key no es encontrado
*/
size_t busquedaLineal(const int array[], int key, size_t size)
{
    // loop a travez del array
    for (size_t n = 0; n < size; ++n)
    {
        if (array[n] == key)
            return n; // retorna el indice donde se encuentra de key
    }

    return -1; // si la clave no fue encontrada
}