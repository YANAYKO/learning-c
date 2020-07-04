/*
    (Recursive Greatest Common Divisor) The greatest common divisor of integers  and is
    the largest integer that evenly divides both x and y. Write a recursive function gcd that returns the
    greatest common divisor of x and y. The gcd of x and y is defined recursively as follows: If y is equal
    to 0, then gcd(x, y) is x; otherwise gcd(x, y) is gcd(y, x % y), where % is the remainder operator.
*/

#include <stdio.h>
#include <stdlib.h>

unsigned int gcd(unsigned int, unsigned int);

int main(void)
{
    unsigned int a, b;

    puts("Maximo comun divisor de 2 numeros.");
    puts("Ingrese el valor de a y b: ");
    scanf("%u%u", &a, &b);
    printf("El mcd es: %u\n", gcd(a, b));
    
    return EXIT_SUCCESS;
}

unsigned int gcd(unsigned int x, unsigned int y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}