/**
 * Generacion de numeros aleatorios entre 1 y 6
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for (int i = 1; i <= 10; ++i)
    {
        printf("%d  ", 1 + (rand() % 6)); // muestra el valor aleatorio de 1 a 6
    }
    puts("");
}