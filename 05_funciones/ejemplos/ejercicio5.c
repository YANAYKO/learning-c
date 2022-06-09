/**
 * Lanzando un dado 60 millones de veces
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int frecuencia1 = 0; // contador de la cara 1
    int frecuencia2 = 0; // contador de la cara 2
    int frecuencia3 = 0; // contador de la cara 3
    int frecuencia4 = 0; // contador de la cara 4
    int frecuencia5 = 0; // contador de la cara 5
    int frecuencia6 = 0; // contador de la cara 6

    // bucle de 60 millones de veces y suma los resultados
    for (int rodar = 1; rodar <= 60000000; rodar++)
    {
        int cara = 1 + rand() % 6; // numero aleatorio de 1 a 6

        // determina el valor de la cara e incrementa su contador
        switch (cara)
        {
        case 1:
            ++frecuencia1;
            break;
        case 2:
            ++frecuencia2;
            break;
        case 3:
            ++frecuencia3;
            break;
        case 4:
            ++frecuencia4;
            break;
        case 5:
            ++frecuencia5;
            break;
        case 6:
            ++frecuencia6;
            break;
        }
    }

    // mostrar los resultados en formato tabular
    printf("%s%13s\n", "Cara", "Frecuencia");
    printf("    1%13d\n", frecuencia1);
    printf("    2%13d\n", frecuencia2);
    printf("    3%13d\n", frecuencia3);
    printf("    4%13d\n", frecuencia4);
    printf("    5%13d\n", frecuencia5);
    printf("    6%13d\n", frecuencia6);
}