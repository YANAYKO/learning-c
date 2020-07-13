// mostrando un histograma
#include <stdio.h>
#define SIZE 5

// la funcion main inicia la ejecucion del programa
int main(void)
{
    // usa una lista de inicializadores para inicializar el array n
    int n[SIZE] = {19, 3, 15, 7 ,11};

    printf("%s%13s%17s\n", "Elemento", "Valor", "Histograma");

    // por cada elemento del array n, mostrar una barra de histograma
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%7u%13d        ", i, n[i]);

        for (int j = 1; j <= n[i]; ++j)
        {
            printf("%c", '*');
        }
        puts(""); // nueva linea
    }

    return 0;
} 