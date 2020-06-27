/*
    Condiciones para dibujar el cuadrado magico

    1) La posición del siguiente número se calcula disminuyendo el número de fila 
    del número anterior en 1 e incrementando el número de columna del número anterior en 1. 
    En cualquier momento, si la posición calculada de la fila se convierte en -1, se ajustará a n-1. 
    Del mismo modo, si la posición calculada de la columna se convierte en n, se ajustará a 0.

    2) Si el cuadrado mágico ya contiene un número en la posición calculada, la posición calculada 
    de la columna se reducirá en 2 y la posición calculada de la fila se incrementará en 1.

    3) Si la posición de la fila calculada es -1 y la posición de la columna calculada es n, 
    la nueva posición sería: (0, n-2).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generar_cuadrado_magico(int n);

int main(void)
{
    int n;
    puts("Ingrese un numero impar para generar el cuadrado magico:");
    scanf("%d", &n);

    generar_cuadrado_magico(n);

    return EXIT_SUCCESS;
}

void generar_cuadrado_magico(int n)
{
    int cuadrado_magico[n][n];

    // llenar el array multidimensional
    memset(cuadrado_magico, 0, sizeof(cuadrado_magico));

    //iniciar la posicion para el valor 1
    int fila = n / 2; // fila
    int col = n - 1; // columna

    // uno por uno se colocan los valores en el cuadrado magico
    for (int num = 1; num <= n * n;)
    {
        if (fila == -1 && col == n) // tercera condicion
        {
            fila = 0;
            col = n - 2;
        } else {
            if (col == n) // primera condicion
                col = 0; // si se va fuera del lado derecho del cuadro, se inicia desde la primera columna
            
            if (fila < 0) // primera condicion
                fila = n - 1; // si se va fuera del lado superior del cuadro, se inicia en parte inferior del cuadro
        }

        if (cuadrado_magico[fila][col]) // segunda condicion
        {
            col -= 2;
            fila++;
            continue; // salta a la siguiente iteracion
        } else {
            cuadrado_magico[fila][col] = num++; // asignar numero al cuadrado magico
        }

        fila--; // primera condicion
        col++;  // primera condicion
    }

    // mostrar el cuadrado magico
    printf("El cuadrado magico para n = %d:\n", n);
    printf("Suma de cada fila y columna %d:\n\n", n * (n * n + 1) / 2);

    for (fila = 0; fila < n; fila++)
    {
        for (col = 0; col < n; col++)
            printf("%3d ", cuadrado_magico[fila][col]);
        puts("");
    }
}