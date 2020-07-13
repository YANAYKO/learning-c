// Uso de array para resumir los resultados de una encuesta
/*
    Se pidió a cuarenta estudiantes que calificaran la calidad de la comida en la cafetería de estudiantes 
    en una escala del 1 al 10 (1 significa horrible y 10 significa excelente). Coloque las 40 respuestas 
    en una matriz entera y resuma los resultados de la encuesta.
*/

#include <stdio.h>
#define RESPUESTAS_SIZE 40 // define el tamaño del array
#define FRECUENCIA_SIZE 11

// la funcion main inicia la ejecucion del programa
int main(void)
{
    // inicia los contadores de frecuencia a 0
    int frecuencia[FRECUENCIA_SIZE] = {0};

    // colocar las respuestas de la encuesta en el array respuestas
    int respuestas[RESPUESTAS_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
        1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
        5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

    // para cada respuesta, selecciona el valor de un elemento del array respuesta
    // y usa ese valor como un indice en el array frecuencia para
    // derterminar el elemento a incrementar
    for (size_t i = 0; i < RESPUESTAS_SIZE; ++i)
    {
        ++frecuencia[respuestas[i]];
    }

    // mostrar los resultados
    printf("%s%17s\n", "Rating", "Frecuencia");

    // mostrar las frecuencias en formato tabular
    for (size_t rating = 1; rating < FRECUENCIA_SIZE; ++rating)
    {
        printf("%6d%17d\n", rating, frecuencia[rating]);
    }
}