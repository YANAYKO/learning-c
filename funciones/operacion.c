/*
    parte entera de la division y cociente de dos numeros positivos utilizando solo suma y resta
*/

#include <stdio.h>
#include <stdlib.h>


void division_resto(int, int);

int main(void)
{
    unsigned int n, m;
    
    puts("Parte entera y resto usando operadores suma y resta.");

    printf("%s", "Ingresa 2 numeros: ");
    scanf("%u%u", &n, &m);

    
    (n > m) ? division_resto(n, m) : printf("El primer numero debe ser mayor.");
    return EXIT_SUCCESS;
}

void division_resto(int a, int b)
{
    int i = 0;
    while (!(a < b))
    {
        a = a - b;
        i++;
    }

    printf("Entero: %d\nResto: %d\n", i, a);
}