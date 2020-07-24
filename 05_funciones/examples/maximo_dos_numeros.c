#include <stdio.h>
#include <stdlib.h>

int maximo(int, int);

int main(void)
{
    int a, b;

    printf("%s", "Ingrese 2 numeros para mostrar el mayor: ");
    scanf("%d %d", &a, &b);

    printf("El mayor es: %d\n", maximo(a, b));

    return EXIT_SUCCESS;
}


int maximo(int a, int b)
{
    return (a > b) ? a : b;
}