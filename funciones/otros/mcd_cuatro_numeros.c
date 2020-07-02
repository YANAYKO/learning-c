#include <stdio.h>
#include <stdlib.h>

int obtener_mcd(int, int);

int main(void)
{
    int a, b, c, d;
    int mcd1, mcd2;
    puts("Ingrese 4 numero para obtener su MCD: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    mcd1 = obtener_mcd(a, b);
    mcd2 = obtener_mcd(c, d);

    printf("MCD de %d - %d - %d - %d: %d\n", a, b, c, d, obtener_mcd(mcd1, mcd2));
    return EXIT_SUCCESS;
}

int obtener_mcd(int a, int b) // 15 - 5
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }else {
            b = b - a; 
        }
    }
    return b;
}