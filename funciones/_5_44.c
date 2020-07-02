#include <stdlib.h>
#include <stdio.h>


int mystery(int, int);

int main(void)
{
    printf("%s", "Ingresa dos enteros positivos: ");
    unsigned int x; // primer entero
    unsigned int y; // segundo entero

    scanf("%d%d", &x, &y);

    printf("El resultado es %d\n", mystery(x, y));
    return EXIT_SUCCESS;
}

int mystery(int a, int b) // multiplicacion recursiva
{
    /*
        if(1 == b)
        {
            return a;
        } else {
            return a + mystery(a, b - 1);
        }
    */
   // en caso de que b sea positivo
    if (b > 0)
        return a + mystery(a, b - 1); // recursion a + a + a + a + a

    // en caso de que b sea negativo
    if (b < 0)
        return -a + mystery(a, b + 1); // recursion -a + -a + -a + -a
}