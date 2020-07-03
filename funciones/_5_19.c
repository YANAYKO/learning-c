/*
    (Rectangle of Asterisks)
*/

#include <stdio.h>
#include <stdlib.h>

void dibujar_rectangulo(unsigned int a, unsigned int b);

int main(void)
{
    unsigned int l1, l2;
    puts("Rectangulo de asteriscos.");
    
    printf("Ingrese los lados del rectangulo (l1 y l2): ");
    scanf("%u%u", &l1, &l2);

    dibujar_rectangulo(l1, l2);

    return EXIT_SUCCESS;
}

void dibujar_rectangulo(unsigned int a, unsigned int b)
{
    int i, j;
    for (i = 0;  i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%c ", '*');
        }
        puts(""); // nueva linea
    }
}