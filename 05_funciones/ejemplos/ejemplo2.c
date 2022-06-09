// encontrando el mayor de tres enteros
#include <stdio.h>

int maximo(int x, int y, int z); // prototipo de funcion

int main(void) {
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    printf("%s", "Ingresar tres numeros: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    // n1, n2, n3 son argumentos
    // para la funcion maximo
    printf("El numero Maximo es: %d\n", maximo(n1, n2, n3));
}

// definicion de la funcion maximo
int maximo(int x, int y, int z) {
    int max = x; // asumir que x es el numero mas grande

    if(y > max) {   // si y es mayor que max
        max = y;    // se reasigna max con el valor de y
    }

    if (z > max) { // si y es mayor que max
        max = z;   // se reasigna max con el valor de z
    }

    return max;
}