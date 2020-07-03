/*
    5.21
    (Project: Drawing Shapes with Characters) Use techniques similar to those developed in
    Exercises 5.19–5.20 to produce a program that graphs a wide range of shapes.
*/

#include <stdio.h>
#include <stdlib.h>

void triangulo_rectangulo(unsigned int, char);
void triangulo_rectangulo_inverso(unsigned int, char);
void triangulo_equilatero(unsigned int, char);
void triangulo_equilatero_inverso(unsigned int, char);
void triangulo_isosceles(unsigned int, char);

int main(void)
{
    unsigned int h;
    char ch;

    puts("Figuras con caracteres.");

    printf("%s", "Ingrese altura y un caracter:\n");
    scanf("%u %c", &h, &ch);
    
    printf("\nTriangulo rectangulo:\n");
    triangulo_rectangulo(h, ch);

    printf("\nTriangulo rectangulo inverso:\n");
    triangulo_rectangulo_inverso(h, ch);
    
    printf("\nTriangulo equilatero:\n");
    triangulo_equilatero(h, ch);
    
   
    printf("\nTriangulo equilatero Inverso:\n");
    triangulo_equilatero_inverso(h, ch);
    
    printf("\nTriangulo Isosceles:\n");
    triangulo_isosceles(h, ch);
    return EXIT_SUCCESS;
}

void triangulo_rectangulo(unsigned int h, char c)
{
    int i, j;
    for (i = 0; i < h; ++i)
    {
        for (j = 0; j <= i; ++j)
            printf("%c ", c);
        puts("");
    }
}

void triangulo_rectangulo_inverso(unsigned int h, char c)
{
    int i, j;
    for (i = 0; i < h; ++i)
    {
        for (j = h; j > i; --j)
            printf("%c ", c);
        puts("");
    }
}

void triangulo_equilatero(unsigned int h, char c)
{
    int i, j;
    
    for (i = 0; i < h; ++i)
    {
        for (j = h - 1; j > i; --j)
            printf("  ");
        
        for (j = 0; j <= 2 * i; ++j)
        {
            if (j % 2 == 0)
                printf("%c ", c);
            else
                printf("  ");
        }
        puts("");
    }
}

void triangulo_equilatero_inverso(unsigned int h, char c)
{
    int i, j;

    for (i = 0; i < h; ++i)
    {
        for (j = 0; j < i; ++j)
            printf("  ");
        
        for (j = 2 * h - 1; j > i * 2; --j)
        {
            if (j % 2 != 0)
                printf("%c ", c);
            else
                printf("  ");
        }
        puts("");
    }
}

void triangulo_isosceles(unsigned int h, char c)
{
    int i, j;

    for (i = 0; i < h; ++i)
    {
        for (j = h - 1; j > i;  --j)
            printf("  ");
        
        for (j = 0; j < 2 * i + 1; ++j)
            printf("%c ", c);

        puts("");
    }
}