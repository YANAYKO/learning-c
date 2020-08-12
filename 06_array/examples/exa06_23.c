// arrays de longitud variable en C99
#include <stdio.h>

// prototipos de funcion
void print1DArray(size_t size, int array[size]);
void print2DArray(int fila, int colum, int array[fila][colum]);

struct exa06_23
{
    /* data */
};


int main(void)
{
    printf("%s", "Ingrese el size de un array de una dimension: ");
    int arraySize; // size de 1D array
    scanf("%d", &arraySize);

    int array[arraySize]; // declara un array 1D de longitud variable

    printf("%s", "Ingrese el numero de filas y columnas de un array 2D: ");
    int fil1, col1;
    scanf("%d %d", &fil1, &col1);

    int array2D1[fil1][col1]; // declara un array 2D de longitud variable

    printf("%s", "Ingrese el numero de filas y columnas de otro array 2D: ");
    int fil2, col2;
    scanf("%d %d", &fil2, &col2);

    int array2D2[fil2][col2]; // declara un array 2D de longitud variable

    // probar el operador sizeof en VLA
    printf("\nsizeof(array) produce el size del array de %d bytes\n", sizeof(array));

    // asignar elementos al array 1D
    for (size_t i = 0; i < arraySize; ++i)
    {
        array[i] = i * i;
    }

    // asignar elementos al primer array 2D
    for (size_t i = 0; i < fil1; ++i)
    {
        for (size_t j = 0; j < col1; ++j)
            array2D1[i][j] = i + j;
    }

    // asignar elementos al segundo array 2D
    for (size_t i = 0; i < fil2; ++i)
    {
        for (size_t j = 0; j < col2; ++j)
            array2D2[i][j] = i + j;
    }

    puts("\nArray de una dimension:");
    print1DArray(arraySize, array); // pasa 1-D array a la funcion

    puts("\nPrimer array de dos dimensiones:");
    print2DArray(fil1, col1, array2D1); // pasa un array 2D a la funcion

    puts("\nSegundo array de dos dimensiones:");
    print2DArray(fil2, col2, array2D2); // pasa un array 2D a la funcion
}

void print1DArray(size_t size, int array[size])
{
    // mostrar el contenido del array
    for (size_t i = 0; i < size; ++i)
        printf("array[%d] = %d\n", i, array[i]);
}


void print2DArray(int fila, int colum, int array[fila][colum])
{
    // mostrar el contenido del array
    for (size_t i = 0; i < fila; ++i)
    {
        for (size_t j = 0; j < colum; ++j)
        {
            printf("%5d", array[i][j]);
        }
        puts("");
    }
}