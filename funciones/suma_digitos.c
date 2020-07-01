/*
    Write a function that takes an integer and returns the sum of its digits. For
    example, given the number 7631, the function should return 17 (7 + 6 + 3 + 1).
*/

#include <stdio.h>
#include <stdlib.h>

int sumar_digitos(unsigned int);


int main(void)
{
    unsigned int num;
    
    printf("%s", "Ingrese un numero: ");
    scanf("%u", &num);

    printf("Suma de digitos: %d\n", sumar_digitos(num));

    return EXIT_SUCCESS;
}

int sumar_digitos(unsigned int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}