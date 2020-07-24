#include <stdio.h>
#include <stdlib.h>

double obtener_media(double, double, double);

int main(void)
{
    int a, b, c;
    puts("Ingrese 3 numeros para cacular la media: ");
    scanf("%d %d %d", &a, &b, &c);
    return EXIT_SUCCESS;
}

double obtener_media(double a, double b, double c)
{
    return (a + b + c) / 3;
}