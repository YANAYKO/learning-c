// array de caracteres
// tratar array de caracteres como string

#include <stdio.h>
#define SIZE 20


// la funcion main inicia la ejecucion del programa
int main(void)
{
    char string1[SIZE]; // reserva 20 caracteres
    char string2[] = {"string literal"}; // reserva 15 caracteres

    // lee el string del usuario en el array array1
    printf("%s", "Ingresar un string(no mas de 19 caracteres): ");
    scanf("%19s", string1); // entrar no mas de 19 caracteres

    // mostrar strings
    printf("string1 es: %s\nstring2 es: %s\nstring 1 con espacios entre caracteres es: \n", string1, string2);

    //mostrar caracteres hasta que se alcanza el caracter null
    for (size_t i = 0; i < SIZE && string1[i] != '\0'; ++i)
    {
        printf("%c ", string1[i]);
    }
    puts("");
    return 0;
}