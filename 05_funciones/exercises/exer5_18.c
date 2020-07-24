/*
    (Even or Odd) Write a program that inputs a series of integers and passes them one at a time
    to function isEven, which uses the remainder operator to determine whether an integer is even. The
    function should take an integer argument and return 1 if the integer is even and 0 otherwise. 
*/

#include <stdio.h>
#include <stdlib.h>

int isEven(int);

int main(void)
{
    int num;
    char continua;
    puts("Verificacion si un numero es par o impar.");

    do {
        scanf("%d", &num);
        if (isEven(num) == 1)
            printf("%d: %s\n", num, "Par");
        else
            printf("%d: %s\n", num, "Impar");
        printf("%s", "Desea ingresar otro numero? (s/n): ");
        scanf(" %c", &continua);
    } while (continua != 'n');

    return EXIT_SUCCESS;
}

int isEven(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}