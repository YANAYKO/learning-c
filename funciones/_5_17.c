/*
    (Sides of a Right Triangle) Write a function that reads three nonzero integers and determines
    whether they are the sides of a right-angled triangle. The function should take three integer
    arguments and return 1 (true) if the arguments comprise a right-angled triangle, and 0 (false)
    otherwise. Use this function in a program that inputs a series of sets of integers.    
*/

#include <stdio.h>
#include <stdlib.h>

int isTriangle(unsigned int, unsigned int, unsigned int);

int main(void)
{
    unsigned int l1, l2, l3;
    char desicion;

    puts("Validar lados de un triangulo.");
    
    do {
        printf("%s", "Ingrese los 3 lados: ");
        scanf("%u%u%u", &l1, &l2, &l3);
        
        if (isTriangle(l1, l2, l3) == 1)
            puts("El triangulo existe.");
        else
            puts("El triangulo no existe.");
        
        printf("%s", "Desea validar otro triangulo? (s/n): ");
        scanf(" %c", &desicion);
    } while (desicion != 'n');
    
    return EXIT_SUCCESS;
}

int isTriangle(unsigned int a, unsigned int b, unsigned int c)
{
    if (a + b > c && a + c > b && b + c > a)
        return 1;
    else
        return 0;
}