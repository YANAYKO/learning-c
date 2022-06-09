// manipulacion de array de dos dimensiones

#include <stdio.h>
#define ESTUDIANTES 3
#define EXAMENES 4

// prototipos de funciones
int minimo(const int notas[][EXAMENES], size_t alumnos, size_t pruebas);
int maximo(const int notas[][EXAMENES], size_t alumnos, size_t pruebas);
double promedio(const int conjuntoDeNotas[], size_t pruebas);
void printArray(const int notas[][EXAMENES], size_t alumnos, size_t pruebas);

// la funcion main inicia la ejecucion del programa
int main(void)
{
    // inicializa  las notas para tres estudiantes (filas)
    int notasAlumno[ESTUDIANTES][EXAMENES] = 
    {
        {77, 68, 86, 73},
        {96, 87, 89, 78},
        {70, 90, 86, 81}
    };

    // mostrar el array notasAlumno
    puts("El array es:");
    printArray(notasAlumno, ESTUDIANTES, EXAMENES);

    // determinar la nota maxima y minima
    printf("\n\nNota mas baja: %d\nNota mas alta: %d\n",
        minimo(notasAlumno, ESTUDIANTES, EXAMENES),
        maximo(notasAlumno, ESTUDIANTES, EXAMENES));

    // calcular la nota promedio de cada estudiante
    for (size_t estudiante = 0; estudiante < ESTUDIANTES; ++estudiante)
    {
        printf("La nota promedio para el estudiante %u es %.2f\n",
            estudiante, promedio(notasAlumno[estudiante], EXAMENES));
    }
}

// enccuentra el grado menor
int minimo(const int notas[][EXAMENES], size_t alumnos, size_t pruebas)
{
    int notaMenor = 100; // inicializa el mayor grado posible

    // loop a traves de la fila de los grados
    for (size_t i = 0; i < alumnos; ++i)
    {
        // loop a traves de las columnas de los grados
        for (size_t j = 0; j < pruebas; ++j)
        {
            if (notas[i][j] < notaMenor)
                notaMenor = notas[i][j];
        }
    }
    return notaMenor; // retorna la calificacion menor
}

// encuentra el grado maximo
int maximo(const int notas[][EXAMENES], size_t alumnos, size_t pruebas)
{
    int notaMayor = 0; // inicializa el menor grado posible

    // loop a traves de la fila de los grados
    for (size_t i = 0; i < alumnos; ++i)
    {
        // loop a traves de las columnas de los grados
        for (size_t j = 0; j < pruebas; ++j)
        {
            if (notas[i][j] > notaMayor)
                notaMayor = notas[i][j];
        }
    }
    return notaMayor; // retorna el grado mayor
}

// determina la nota promedio de un estudiante en particular
double promedio(const int conjuntoDeNotas[], size_t pruebas)
{
    int total = 0; // suma de las notas de la pruebas
    // total de todas las notas para un estudiante
    for (size_t i = 0;  i < pruebas; ++i)
    {
        total += conjuntoDeNotas[i];
    }
    return (double) total / pruebas; // promedio

}

// imprimir el array
void printArray(const int notas[][EXAMENES], size_t alumnos, size_t pruebas)
{
    // mostrar cabeceras de columas
    printf("%s", "               [0]  [1]  [2]  [3]");

    // mostrar las notas en formato tabular
    for (size_t i = 0; i < alumnos; ++i)
    {
        // etiqueta para la fila
        printf("\nnotasAlumno[%u] ", i);

        // mostrar las notas para un estudiantes
        for (size_t j = 0; j < pruebas; ++j)
        {
            printf("%-5d", notas[i][j]);
        }
    }
}

