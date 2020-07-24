//inicializando los elementos de un array a cero
#include <stdio.h>


//la funcion main inicia la ejecucion del programa
int main(void)
{
    int n[5]; // n es un array de cinco enteros

    // estableceer los elementos del array n a 0
    for (size_t i = 0; i < 5; ++i)
    {
        n[i] = 0; // establecer el elemento en la ubicacion i a 0
    }

    printf("%s%13s\n", "Elemento", "Valor");

    // muestra el contenido del array n en formato tabular
    for (size_t i = 0; i < 5; ++i)
    {
        printf("%7u%13d\n", i, n[i]);
    }

    return 0; // el programa termina con exito
}