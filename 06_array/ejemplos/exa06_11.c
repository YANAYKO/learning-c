// los array estaticos se inicializan a 0 si no estan inicializados explicitamente

#include <stdio.h>
#include <stdlib.h>

void staticArrayInt(void); // prototipo
void automaticArrayInt(void); // prototipo
 
// la funcion main inicia la ejecucion del programa
int main(void)
{
    puts("Primera llamada a cada funcion:");
    staticArrayInt();
    automaticArrayInt();

    puts("\n\nSegunda llamada a cada funcion:");
    staticArrayInt();
    automaticArrayInt();
}

// funcion para demostrar  un array local estatico
void staticArrayInt(void)
{
    // inicializar los elementos a 0 antes que se llame a la funcion
    static int array1[3];

    puts("\nValores al ingresar a staticArrayInt: ");

    // mostrar contenido de array1
    for (size_t i = 0; i <= 2; ++i)
    {
        printf("array1[%u] = %d ", i, array1[i]);
    }

    puts("\nValores al salir de staticArrayInt: ");

    // modificar y mostrar el contenido de array1
    for (size_t i = 0; i <= 2; ++i)
    {
        printf("array1[%u] = %d ", i, array1[i] += 5);
    }
}

// funcion para demostrar un array automatico local
void automaticArrayInt(void)
{
    // inicializa el elemento cada vez que se llama a la funcion
    int array2[3] = {1, 2, 3};

    puts("\n\nValores al ingresar a automaticArrayInt:");

    // mostrar el contenido de array2
    for (size_t i = 0; i <= 2; ++i)
    {
        printf("array2[%u] = %d ", i, array2[i]);
    }

    puts("\nValores al salir de automaticArrayInt:");

    // modificar y mostrar el contenido de array2
    for (size_t i = 0; i <= 2; ++i)
    {
        printf("array2[%u] = %d ", i, array2[i] += 5);
    }
}