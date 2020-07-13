// lanzar un dado 60 millones de veces y resumir los resultados en un array
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

// la funcion main inicia la ejecucion del programa
int main(void)
{
    unsigned int frecuencia[SIZE] = {0}; // inicializa a 0

    srand(time(NULL)); // generador de numeros aleatorios de seed

    // lanzar un dado 60M de veces
    for (unsigned int lanzar = 1; lanzar <= 60000000; ++lanzar)
    {
        size_t cara = 1 + rand() % 6;
        ++frecuencia[cara];
    }

    printf("%s%17s\n", "Cara", "Frecuencia");

    // muestra la frecuencia de los elementos 1 - 6 en un formato tabular
    for (size_t cara = 1; cara < SIZE; ++cara)
    {
        printf("%4d%17d\n", cara, frecuencia[cara]);
    }

    return EXIT_SUCCESS;
}
