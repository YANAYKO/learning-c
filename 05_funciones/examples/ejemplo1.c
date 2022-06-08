// creando y usando una funcion
#include <stdio.h>

int cuadrado(int numero); // prototipo de funcion

int main(void) {
    // bucle que se repite 10 veces, calcula y muestra el cuadrado de x
    for (int i = 0; i <= 10; i++)
    {
        printf("%d  ", cuadrado(i)); // llamada a la funcion
    }
    
    puts("");
}


// funcion "cuadrado" que devuelve el cuadrado de su parametro
int cuadrado(int numero) {
    return numero * numero; // retorna el cuadrado de la variable numero como entero
}