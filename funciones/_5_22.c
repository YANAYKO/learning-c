/*
    (Separating Digits) Write program segments that accomplish each of the following:
    a) Calculate the integer part of the quotient when integer a is divided by integer b.
    b) Calculate the integer remainder when integer a is divided by integer b.
    c) Use the program pieces developed in a) and b) to write a function that inputs an integer
        between 1 and 32767 and prints it as a series of digits, with two spaces between each digit.
        For example, the integer 4562 should be printed as:  4  5  6  2
*/

#include <stdio.h>
#include <stdlib.h>


void numero_digito(int);

int main(void)
{
    unsigned int num;
    scanf("%u", &num);

    if (num <= 32767)
    {
        numero_digito(num);
    } else {
        puts("Numero fuera de rango (1 - 32767)");
    }

    return EXIT_SUCCESS;
}

void numero_digito(int n)
{
    int digitos[5] = {0, 0, 0, 0, 0};
    int i = 0;
    while (n > 0)
    {
        digitos[i] = n % 10;
        n /= 10;
        i++; // contador de digitos de n, 32 tiene 2 digitos, i = 2
    }

    puts("");
    
    //j = 2 - 1 -> j = 1, entonces recorrera el array(orden inverso)desde 1 hasta 0 (2 digitos)
    for (int j = i - 1; j >= 0; j--)
        printf("%d  ", digitos[j]);
}