// especificando el size del array con una constante simbolica e inicializando el array con calculos
// inicializando el array s para los enteros pares entre 2 y 10
#include <stdio.h>
#define SIZE 5 // size maximo en el array

// la funcion main inicia la ejecucion del programa
int main(void)
{
    // la constante simboliza SIZE puede usarse para especificar el tamaño del array
    int s[SIZE]; // el array s tiene SIZE elementos

    for (size_t j = 0; j < SIZE; ++j) // establece los valores
    {
        s[j] = 2 * (1 + j);
    }

    printf("%s%13s\n", "Elemento", "Valor");

    // muestra el contenido del array s en formato tabular
    for (size_t j = 0; j < SIZE; ++j)
    {
        printf("%7u%13d\n", j, s[j]);
    }

    return 0;
}