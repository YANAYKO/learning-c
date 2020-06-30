#include <stdio.h>
#include <stdlib.h>


int max(int, int, int, int);

int main(void)
{
    int n1, n2, n3, n4;
    printf("%s","Ingrese 4 numeros: ");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    printf("Max: %d\n", max(n1, n2, n3, n4));

    return EXIT_SUCCESS;
}

int max(int a, int b, int c, int d)
{
    int max = a;
    
    if (max < b) max = b;

    if (max < c) max = c;

    if (max < d) max = d;

    return max;
}