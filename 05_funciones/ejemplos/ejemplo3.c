/* 
    Demostración de la pila de llamadas de función
    y de los marcos de pila usando un cuadrado de función
*/

#include <stdio.h>

int cuadrado(int x); // prototipo de la funcion cuadrado

int main(void)
{
    int a = 10; // valor que se enviara a la funcion cuadrado, variable local

    // mostrar el cuadrado
    printf("%d cuadrado: %d\n", a, cuadrado(a));
}

//retorna el cuadrado de un numero entero
int cuadrado(int x) { // x es una variable local
    return x * x;
}