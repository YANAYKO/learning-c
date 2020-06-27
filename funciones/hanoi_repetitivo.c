#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void hanoi(int, int, int, int);

int main(void)
{
    int numero_discos = 3;

    hanoi(numero_discos, 1, 2, 3);

    return EXIT_SUCCESS;
}

void hanoi(int nro_d, int b_inicio, int b_central, int b_final)
{
    int aux;
    int pasos =  (int) pow(2, nro_d) - 1;
    for (int i = 0; i < pasos; ++i)
    {
        
    }
}