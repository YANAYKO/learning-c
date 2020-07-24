// inicializando los elementos de un array con una lista de inicializadores
#include <stdio.h>

// la funcion main inicia la ejecucion del programa
int main(void)
{
    // usa una lista de inicializadores para iniciar el array n
    int n[5] = {32, 27, 64, 18, 95};

    printf("%s%13s\n", "Elemento", "Valor");

    // muestra el contenido del array n en formato tabula
    for (size_t i = 0; i < 5; ++i)
    {
        printf("%7u%13d\n", i, n[i]);
    }

    return 0;
}