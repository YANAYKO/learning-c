// el nombre del array es lo mismo que la direccion del primer elemento del array
#include <stdio.h>

// funcion main inicia la ejecucion del programa
int main(void)
{
    char array[5]; // define un array de size 5

    printf("    array = %p\n&array[0] = %p\n   &array = %p\n", array, &array[0], &array);
}