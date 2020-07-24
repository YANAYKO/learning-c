/*
    (Currency Conversion) Implement the following double functions:
    a) Function toYen takes an amount in US dollars and returns the Yen equivalent.
    b) Function toEuro takes an amount in US dollars and return the Euro equivalent
    c) Use these functions to write a program that prints charts showing the Yen and Euro
    equivalents of a range of dollar amounts. Print the outputs in a neat tabular format. Use
    an exchange rate of 1 USD = 118.87 Yen and 1 USD = 0.92 Euro.
*/

#include <stdio.h>
#include <stdlib.h>

double toYen(double);
double toEuro(double);

int main(void)
{
    double dolar, yen, euro;
    puts("Conversion de Dolar a Yen y Euro.");

    puts("------------------------------------------------");
    for (double dol = 1; dol <= 10; dol++)
    {
        yen = toYen(dol);
        euro = toEuro(dol);

        printf("%10.2f%10s: ", dol, "Dolar");
        for (int j = 0; j < dol; j++)
            printf("*");
        puts("");

        printf("%10.2f%10s: ", yen, "Yen");
        for (int j = 0; j < yen / 50; j++)
            printf("*");
        puts("");
        
        printf("%10.2f%10s: ", euro, "Euro");
        for (int j = 0; j < euro; j++)
            printf("*");
        puts("");
        puts("--------------------------------------------------");
    }

    return EXIT_SUCCESS;
}

double toYen(double d)
{
    return d * 118.87;
}

double toEuro(double d)
{
    return d * 0.92;
}