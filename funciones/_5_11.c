/*
    (Rounding Numbers) Function floor may be used to round a number to a specific decimal
    the statement
        y = floor(x * 10 + .5) / 10;
    rounds x to the tenths position (the first position to the right of the decimal point). The statement
        y = floor(x * 100 + .5) / 100;
    rounds x to the hundredths position (the second position to the right of the decimal point). Write
    a program that defines four functions to round a number x in various ways
    a) roundToInteger(number)
    b) roundToTenths(number)
    c) roundToHundreths(number)
    d) roundToThousandths(number)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void roundToInteger(double);
void roundToTenths(double);
void roundToHundreths(double);
void roundToThousandths(double);

int main(void)
{
    double num;

    puts("Cuatro formas de redondeo.");

    printf("%s", "Numero: ");
    scanf("%lf", &num);

    roundToInteger(num);
    roundToTenths(num);
    roundToHundreths(num);
    roundToThousandths(num);

    return EXIT_SUCCESS;
}

void roundToInteger(double n)
{
    printf("%f -> %f\n", n, floor(n + .5));
}

void roundToTenths(double n)
{
    printf("%f -> %f\n", n, floor(n * 10 + .5) / 10);
}

void roundToHundreths(double n)
{
    printf("%f -> %f\n", n, floor(n * 100 + .5) / 100);
}

void roundToThousandths(double n)
{
    printf("%f -> %f\n", n, floor(n * 1000 + .5) / 1000);
}