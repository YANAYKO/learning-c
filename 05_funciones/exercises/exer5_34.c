/*
    (Recursive Exponentiation) Write a recursive function power(base, exponent) that when
    invoked returns base^exponent
    For example, power(3, 4) = 3 * 3 * 3 * 3. Assume that exponent is an integer greater than or equal
    to 1. Hint: 
    The recursion step would use the relationship
        base^exponent = base * base ^ exponent–1
    and the terminating condition occurs when exponent is equal to 1 because
        base1 = base
*/

#include <stdio.h>
#include <stdlib.h>

double power(double, unsigned int);

int main(void)
{
    double base;
    unsigned int exp;

    puts("Potencia recursiva.");
    
    printf("Ingrese la base y exponente: ");
    scanf("%lf%u", &base, &exp);

    printf("Resultado: %.2f\n", power(base, exp));
    return EXIT_SUCCESS;
}

double power(double b, unsigned int e)
{
    if (e == 1)
        return b;
    else
        return b * power(b, e - 1);
}