/*
    (Rounding Numbers) An application of function ceil is rounding a value to the nearest
    integer. The statement
        y = ceil(x + .5);
    rounds the number x to the nearest integer and assigns the result to y. Write a program that reads
    several numbers and uses the preceding statement to round each of these numbers to the nearest
    integer. For each number processed, print both the original number and the rounded number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double n;

    puts("Redondeo de numeros");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%lf", &n);
        printf("%f -> %f\n", n, ceil(n + .5)); // redonde al valor entero
    }

    return EXIT_SUCCESS;
}