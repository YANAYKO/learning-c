// busqueda binaria en un array ordenado
#include <stdio.h>
#include <stdlib.h>
#define SIZE 15

// prototipo de funcion
size_t busquedaBinaria(const int b[], int claveBuscar, size_t izquieda, size_t derecha);
void printHeader(void);
void printRow(const int b[], size_t izquierda, size_t medio, size_t derecha);

// la funcion main inicia la ejecucion del programa
int main(void)
{
    int a[SIZE]; // crea un array a

    // crear datos
    for (size_t i = 0; i < SIZE; ++i)
    {
        a[i] = 2 * i;
    }

    printf("%s", "Ingresa un numero entre 0 y 28: ");
    int key;
    scanf("%d", &key);

    printHeader();

    // buscar el key en el array
    size_t resultado = busquedaBinaria(a, key, 0, SIZE - 1);

    // mostrar resultados
    if (resultado != -1)
        printf("\n%d encontrado en la posicion %d\n", key, resultado);
    else
        printf("\n%d no encontrado\n", key);

    return EXIT_SUCCESS;
}

// funcion para realizar una busqueda binaria en una array
size_t busquedaBinaria(const int b[], int claveBuscar, size_t izquieda, size_t derecha)
{
    // loop hasta que izquierda sea mayor que derecha
    while (izquieda <= derecha)
    {
        // determinar el elemento medio del subarray en el que se esta buscando
        size_t medio = (izquieda + derecha) / 2;

        // mostrar el subarray usado en esta iteracion del loop
        printRow(b, izquieda, medio, derecha);

        // si claveBuscar es igual al elemento medio, retornar medio
        if (claveBuscar == b[medio])
            return medio;
        
        // si claveBuscar es menor que el elemento medio, asignar nuevo valor a derecha
        if (claveBuscar < b[medio])
            derecha = medio - 1; // buscar en la parte izquierda del array
        
        // si claveBuscar es mayor que el elemento medio, asignar nuevo valor a izquierda
        if (claveBuscar > b[medio])
            izquieda = medio + 1; // buscar en la parte derecha del array
    } // fin while

    return -1; // cuando claveBuscar no se encontro
}

// mostrar cabecera para la salida
void printHeader(void)
{
    puts("\nIndices: ");
    
    // columna de la cabecera
    for (unsigned int i = 0; i < SIZE; ++i)
        printf("%3u", i);

    puts(""); // inicia una nueva linea de salida

    // muestra lineas de caracteres "-"
    for (unsigned int i = 1; i <= 4 * SIZE; ++i)
        printf("%s", "-"); 

    puts(""); // inicia una nueva linea de salida
}

// muestra una columna de salida mostrando la parte reciente del array que
// esta siendo procesado
void printRow(const int b[], size_t izquierda, size_t medio, size_t derecha)
{
    // loop a travez de todo el array
    for (size_t i = 0; i < SIZE; ++i)
    {
        // mostrar espacios si el subarray reciente esta fuera de rango
        if (i < izquierda || i > derecha)
        {
            printf("%s", "    ");
        } else if (i == medio) { // mostrar el elemento medio
            printf("%3d*", b[i]); // marcar valor medio
        } else { // mostrar otros elementos en el subarray
            printf("%3d", b[i]);
        }
    }
    puts(""); // inicia una nueva linea de salida
}