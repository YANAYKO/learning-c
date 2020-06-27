/*
    muestra los caracteres que ingresa el usuario en orden inverso
    es decir, si el usuario ingresa l u i s y luego pulsa ctrl + z (termina el programa)
    entonces se muestra en la consola s i u l
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int c;

    if ((c = getchar()) != EOF)
    {
        main();
        printf("%c", c);
    }
}