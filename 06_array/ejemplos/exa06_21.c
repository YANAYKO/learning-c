// inicializando array multidimensional
#include <stdio.h>

void printArray(int a[][3]); // prototipo de funcion

// la funcion main inicia la ejecucion del programa
int main(void)
{
    int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    puts("Los valores de array1 por fila son:");
    printArray(array1);

    int array2[2][3] = {1, 2, 3, 4, 5};
    puts("Los valores de array2 por fila son:");
    printArray(array2);

    int array3[2][3] = {{1, 2}, {4}};
    puts("Los valores de array3 por fila son:");
    printArray(array3);
}

// funcion para mostrar un array con 2 filas y 3 columnas
void printArray(int a[][3])
{
    // loop a traves de filas
    for (size_t i = 0; i <= 1; ++i)
    {
        // salida de los valores de la columna
        for (size_t j = 0; j <= 2; ++j)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n"); // inicia una nueva linea de salida
    }
}