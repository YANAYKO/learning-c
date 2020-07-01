#include <stdio.h>
#include <stdlib.h>

// prototipo de la funcion
int lcm(int, int);


int main(void)
{
    int n1, n2;
    
    printf("Ingrese 2 numeros: ");
    scanf("%d%d", &n1, &n2);

    printf("LCM: %d\n", lcm(n1, n2));
    return EXIT_SUCCESS;
}

int lcm(int a, int b)
{
    int producto = 1, i = 2; // i es el primer divisor
    
    do {
        if (a % i == 0 && b % i != 0) // la division a/i es exacta y b/i es inexacta
        {
            a /= i; // actualiza el valor de a
            producto *= i; // acumula el divisor de a
        } else if (a % i != 0 && b % i == 0) { // la division a/i es inexacta y b/i es exacta
            b /= i; // actualiza el valor de b
            producto *= i; // acumula el divisor de b
        } else if (a % i == 0 && b % i == 0) { //  la variable i divide a y b sin dejar resto
            a /= i; // se actualiza la variables a
            b /= i; // se actualiza la variable b
            producto *= i; // acumula el divisor comun i de a y b
        } else {
            i++; // si i no divide a ninguno (dejando resto 0), el valor incrementa en 1
        }
    } while (a != 1 || b != 1); // el bucle terminar cuando a y b son 1

    return producto; // el producto de los divisores comunes de a y b
}