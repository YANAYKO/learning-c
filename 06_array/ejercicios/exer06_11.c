/*
    A selection sort algorithm for a one-dimensional array has the following steps:
        a) Se encuentra el valor más pequeño de la matriz.
        b) It is swapped with the value in the first position of the array.
        c) The above steps are repeated for the rest of the array starting 
            at the second position and advancing each time.
    Eventually the entire array is divided into two parts: the sub-array of items 
    already sorted which is built up from left to right and is found at the beginning, 
    and the sub-array of items remaining to be sorted, occupying the remainder of the array. 
    Write a program that sorts an array of 10 integers using this algorithm.
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int get_index_val_minimo(const int a[], size_t start, size_t size);

int main(void)
{
    //               0  1  2  3  4   5  6  7  8  9
    int arr[SIZE] = {2, 4, 8, 1, 12, 142, 21, 6, 7, 8};
    int min; // indice del elemento mas pequeño del array
    int tmp; // variable temporal para el intercambio

    for (size_t i = 0; i < SIZE; ++i)
    {
        min = get_index_val_minimo(arr, i, SIZE);
        // intercambio
        tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }

    // mostrar los elementos ordenados
    puts("Array ordenado por el metodo de seleccion:");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%d ", arr[i]);

    puts("");

    return EXIT_SUCCESS;
}

// funcion que devuelve el indice donde se encuentra el elemento mas pequeño en el array
int get_index_val_minimo(const int a[], size_t start, size_t size)
{
    //el indice del primer elemento del array es donde se encuentrar el elemento mas pequeño
    int index_min = start;

    for (size_t i = start + 1; i <= size; ++i) // loop que inicia en el segundo elemento del array
    {
        if (a[index_min] > a[i]) // si el elemento a la derecha del array es menor que el la izquierda
            index_min = i; // i es el indice menor
    }

    return index_min;
}
 