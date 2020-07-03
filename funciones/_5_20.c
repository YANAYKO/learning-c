/*
    5.20
    (Displaying a Rectangle of Any Character) Modify the function created in Exercise 5.19 to
    form the rectangle out of whatever character is contained in character parameter fillCharacter. Thus
    if the sides are 5 and 4, and fillCharacter is "@", then the function should print the following:   
    @@@@
    @@@@
    @@@@
    @@@@
    @@@@
*/

#include <stdio.h>
#include <stdlib.h>


void dibujar_rectangulo(unsigned int, unsigned int, char);

int main(void)
{
    unsigned int l1, l2;
    char ch;
    puts("Rectangulo de con cualquier caracter.");
    
    printf("Ingrese los lados del rectangulo (l1 y l2): ");
    scanf("%u%u", &l1, &l2);

    printf("%s", "Ingrese el caracter: ");
    scanf(" %c", &ch);

    dibujar_rectangulo(l1, l2, ch);

    return EXIT_SUCCESS;
}

void dibujar_rectangulo(unsigned int a, unsigned int b, char c)
{
    int i, j;
    for (i = 0;  i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%c ", c);
        }
        puts(""); // nueva linea
    }
}