// analisis de datos con arrays
// calcular la media, mediana y moda de los datos

#include <stdio.h>
#include <stdlib.h>
#define SIZE 99

// prototipos
void mean(const unsigned int respuesta[]);
void median(unsigned int respuesta[]);
void mode(unsigned int freq[], unsigned const int respuesta[]);
void bubleSort(int a[]);
void printArray(unsigned const int a[]);

// fun main inicia la ejecucion del programa
int main(void)
{
    unsigned int frecuencia[10] = {0}; // inicializa el array de frecuencias

    // inicializa el array de respuestas
    unsigned int respuesta[SIZE] = {   
        6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
        7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
        6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
        7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
        6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
        7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
        5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
        7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
        7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
        4, 5, 6, 1, 6, 5, 7, 8, 7
    };

    // respuesta de procesos
    mean(respuesta);
    median(respuesta);
    mode(frecuencia, respuesta);

    return EXIT_SUCCESS;
}

// calcula el promedio de todos los valores de respuesta
void mean(const unsigned int respuesta[])
{
    printf("%s\n%s\n%s\n", "********", "  Mean", "********");

    unsigned int total = 0;

    // total de los valores del array respuesta
    for (size_t j = 0; j < SIZE; ++j)
    {
        total += respuesta[j];
    }

    printf("La media es el promedio de los elementos de los datos.\n"
            "La media es igual a la suma de todos los elementos dividido por el\n"
            "numero total de datos (%u). La media para\n"
            "estos datos es: %u / %u = %.4f\n\n", SIZE, total, SIZE, (double) total / SIZE);
}

// ordenar el array y determinar el valor del elemento medio
void median(unsigned int respuesta[])
{
    printf("\n%s\n%s\n%s\n%s", "********", " Median", "********", 
            "El array de respuestas sin ordenar es");

    printArray(respuesta); // mostrar array sin ordenar

    bubleSort(respuesta); // ordenar array

    printf("%s", "\nEl array ordenado es:");
    printArray(respuesta);

    // mostrar el elemento medio
    printf("\n\nLa mediana es el elemento %u de\n"
            "el array ordenado de %u elementos.\n"
            "Para estos datos la mediana es %u\n\n",
            SIZE / 2, SIZE, respuesta[SIZE / 2]);

}

// determinar la respuesta mas frecuente
void mode(unsigned int freq[], unsigned const int respuesta[])
{
    printf("\n%s\n%s\n%s\n", "********", "  Mode", "********");

    // inicializar frecuencias a 0
    for (size_t i = 1; i <= 9; ++i)
    {
        freq[i] = 0;
    }

    // resumir las frecuencias
    for (size_t j = 0; j < SIZE; ++j)
    {
        ++freq[respuesta[j]];
    }

    // mostrar cabeceras para resultados en columnas
    printf("%s%11s%19s\n\n%54s\n%54s\n\n",
            "Respuesta", "Frecuencia", "Histograma",
            "1    1    2    2", "5    0    5    0    5");

    // mostrar resultados
    unsigned int mayor = 0; // representa la mayor frecuencia
    unsigned int  valorModa = 0;// representa la respuesta mas frecuente

    for (size_t i = 1; i <= 9; ++i)
    {
        printf("%8u%11u          ", i, freq[i]);

        // realizar un seguimiento del valor de modo y el valor de frecuencia más grande
        if (freq[i] > mayor)
        {
            mayor = freq[i];
            valorModa = i;
        }

        // mostrar histograma representando los valores de frecuencia
        for (unsigned int h = 1; h <= freq[i]; ++h)
        {
            printf("%s", "*");
        }

        puts(""); // inicia nueva linea de salida
    }

    // mostrar el valor moda
    printf("\nLa moda es el valor mas frecuente.\n"
            "Para estos datos, la moda es %u, el cual"
            " ocurre %u veces.\n", valorModa, mayor);

}

// funcion que ordena un array con el algoritmo bublesort
void bubleSort(int a[])
{
    // loop para controlar el numero de passos
    for (unsigned int paso = 1; paso < SIZE; ++paso)
    {
        // loop para controlar el numero de comparaciones por paso
        for (size_t j = 0; j < SIZE - 1; ++j)
        {
            // intercambiar elementos si estan fuera de orden
            if (a[j] > a[j + 1])
            {
                unsigned int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

// muestra el contenido de un array, 20 valores por linea
void printArray(unsigned const int a[])
{
    // mostrar contenido del array
    for (size_t j = 0; j < SIZE; ++j)
    {
        if (j % 20 == 0) // inicia una nueva linea cada 20 valores
            puts("");

        printf("%2u", a[j]);
    }
}