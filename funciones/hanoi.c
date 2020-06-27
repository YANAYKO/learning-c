#include <stdio.h>
#include <stdlib.h>

//funcion para mostrar los pasos de solucion de la torre de hanoi
void hanoi(int, int, int, int);

int main(void)
{
    int numero_discos = 3;

    hanoi(numero_discos, 1, 2, 3);
    return EXIT_SUCCESS;
}

/*
    3

    1)
        
*/

void hanoi(int nro_discos, int barra_inicial, int barra_central, int barra_final)
{
    //printf("hanoi(%d, %d, %d, %d)\n", nro_discos, barra_inicial, barra_central, barra_final);
    if(nro_discos == 1)
    {
        printf("%d -> %d\n", barra_inicial, barra_final);
    }else {
        hanoi(nro_discos - 1, barra_inicial, barra_final, barra_central);
        printf("%d -> %d\n", barra_inicial, barra_final);
        hanoi(nro_discos - 1, barra_central, barra_inicial, barra_final);
    }
}