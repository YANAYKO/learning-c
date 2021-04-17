/*
    (Union of Sets) Use one-dimensional arrays to solve the following problem. Read in two
    sets of numbers, each having 10 numbers. After reading all values, display all the unique elements
    in the collection of both sets of numbers. Use the smallest possible array to solve this problem.
    
    ////////////////////////////////////////////
    (Unión de conjuntos) Use las matrices unidimensionales para resolver el siguiente problema. 
    Leer en dos conjuntos de números, cada uno con 10 números. Después de leer todos los valores, 
    muestre todos los elementos únicos en la colección de ambos conjuntos de números. Usa la matriz 
    más pequeña posible para resolver este problema. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int binarysearch(int x, int a[], int m, int n);
void bubleSort(int a[], size_t size);
void printArray(int a[]);
void llenarArray(int a[]);
void simplicarArray(int a[], int b[]);


/*
    Primero se realiza una busqueda de cada elemento del array A en el arrray B
    Se guarda en el array C aquellos elementos que son unicos del array A 
    y los que son iguales en ambos arrays.

    Segundo, se realiza una busqueda de los elementos del array B en el array A
    Solo se guarda en el array C, continuando con el indice j en el array C, aquellos
    elementos que son unicos del array B

    Tercer, el array C contiene los elementos en comun y unicos de los arrays A y B,
    lo cual significa que se ha realizado la operacion Union (A u B)

*/
int main(void)
{             
    // seed para los numeros aleatorios
    srand(time(NULL));
    
    int a[SIZE],  b[SIZE];
    int c[20] = {0};
    int d[20] = {0};
    int j = 0;

    // se asigna elementos aleatorios a los array A y B
    llenarArray(a);
    llenarArray(b);


    // realiza una busqueda de los elementos del array A en el array B
    // guarda aquellos elementos unicos e iguales del array A en el array C
    for (size_t i = 0; i < 10; ++i)
    {
        if (binarysearch(a[i], b, 0, SIZE - 1) != -1) // se busca un elemento del array A en el array B
            c[j] = a[i]; // si se encuentra, se guarda en el array C
        else {
            c[j] = a[i]; // si no se encuentra, significa que el elemento del array A es unico y se guarda en el array C
        }
        ++j; // siguiente posiciond el array C
    }
    
    // realiza una busqueda de los elementos del array B en el array A
    // guarda aquellos elementos unicos del array B en el array C, continuando con el indice j
    for (size_t i = 0; i < 10; ++i)
    {
        if (binarysearch(b[i], a, 0, SIZE - 1) == -1)
        {
            c[j] = b[i]; // almacena los elementos unicos del array B
            ++j; // siguiente posicion del array C
        }
        
    }
    
    // ordenamientos
    bubleSort(a, SIZE);
    bubleSort(b, SIZE);
    bubleSort(c, 20);

    // mostrar los arrays ordenados
    printf("Array A ordenado: ");
    printArray(a);
    puts("");

    printf("Array B ordenado: ");
    printArray(b);
    puts("");

    
    simplicarArray(c, d); // crea un nuevo array d sin elementos repetidos desde el array c

    printf("Union de A y B: ");
    for (size_t i = 0; i < 20; ++i)
    {
        if (d[i] == 0) // los elementos del array d que son 0 no se muestra en consola
            continue;
        else
            printf("%d ", d[i]);
    }

    
    return EXIT_SUCCESS;
}

void simplicarArray(int a[], int b[])
{
    int j = 0;
    for (size_t i = 0; i < 20; ++i)
    {
        // si el elemento de la derecha es igual al de la izquierda, no se realiza accion alguna
        if (a[i] == a[i + 1])
            continue; // salta los elementos repetidos
        else {
            b[j] = a[i]; // asigna el elemento a una posicion del array b
            j++; // siguiente elemento
        }
    }
}

// llenar el array con valores aleatorio entre 1 y 20
void llenarArray(int a[])
{
    for (size_t i = 0; i < SIZE; ++i)
    {
        a[i] = rand() % 20 + 1;
    }
}

// mostrar array por consoa
void printArray(int a[])
{
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%d ", a[i]);
    }
}

void bubleSort(int a[], size_t size)
{
    // loop para controlar el numero de passos
    for (unsigned int paso = 1; paso < size; ++paso)
    {
        // loop para controlar el numero de comparaciones por paso
        for (size_t j = 0; j < size - 1; ++j)
        {
            // intercambiar elementos si estan fuera de orden
            if (a[j] > a[j + 1])
            {
                unsigned int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

int binarysearch(int x, int a[], int m, int n)
{
    while (m <= n)
    {
        // determinar el elemento medio del subarray en el que se esta buscando
        size_t medio = (m + n) / 2;

        // si claveBuscar es igual al elemento medio, retornar medio
        if (x == a[medio])
            return medio;
        
        // si claveBuscar es menor que el elemento medio, asignar nuevo valor a derecha
        if (x < a[medio])
            n = medio - 1; // buscar en la parte izquierda del array
        
        // si claveBuscar es mayor que el elemento medio, asignar nuevo valor a izquierda
        if (x > a[medio])
            m = medio + 1; // buscar en la parte derecha del array
    } // fin while

    return -1; // cuando claveBuscar no se encontro
}
