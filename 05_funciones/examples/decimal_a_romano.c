/*
    1    -> I
    5    -> V
    10   -> X
    50   -> L
    100  -> C
    500  -> D
    1000 -> M

    1245 / 1000 = 1 -> M
    1245 % 1000 = 245
    
    245 / 100 = 2 -> CC
    245 % 100 = 45
    
    45 / 10 = 4 -> XL
    45 % 10 = 5 -> V

    1245 -> MCCXLV

*/

#include <stdio.h>
#include <stdlib.h>

void convertirDecimalaRomano(int);
void escribirDigito(int, char, char, char);

int main(void)
{
    int numero;
    printf("%s", "Ingresar un numero para convertirlo a romano: ");
    scanf("%d", &numero);
    
    convertirDecimalaRomano(numero);

    puts("");
    return EXIT_SUCCESS;
}

/*
    1245 / 1000 = 1 -> M
    1245 % 1000 = 245
    
    245 / 100 = 2 -> CC
    245 % 100 = 45
    
    45 / 10 = 4 -> XL
    45 % 10 = 5 -> V

    1245 -> MCCXLV
*/
void convertirDecimalaRomano(int n)
{
    int backup = n, digito;

    // dividir entre 1000
    digito = backup / 1000;
    backup = backup % 1000;
    escribirDigito(digito, 'M', ' ', ' ');

    // dividir entre 100
    digito = backup / 100;
    backup = backup % 100;
    escribirDigito(digito, 'C', 'D', 'M');

    // dividir entre 10
    digito = backup / 10;
    backup = backup % 10;
    escribirDigito(digito, 'X', 'L', 'C');

    digito = backup;
    escribirDigito(digito, 'I', 'V', 'X');
}
/*
    M
        3999 = MMMCMXCIX <- maximo numero romano
    C D M 
        100 - 300 -> CCC
        400 = CD, 
        500 = D
        600 - 800 -> DCCC
        900 = CM
    X L C
        10 - 30 -> XXX
        40 = XL
        50 = L
        60 - 80 -> LXXX
        90 = XC
    I V X
        1 - 3 -> III
        4 = IV
        5 = V
        6 - 8 -> VIII
        9 = IX
*/
// I, V, X
// 1-3, 4, ,5, 6-7-8,9, 10 / 
void escribirDigito(int digito, char c1, char c2, char c3)
{
    if (digito < 4)
        for (int i  = 0; i < digito; i++)
            printf("%c", c1);

    if (digito == 4)
        printf("%c%c", c1, c2);

    if (digito < 9  && digito > 4)
    {
        printf("%c", c2);
        for (int i = 0; i < digito - 5; i++)
            printf("%c", c1);
    }
    
    if (digito == 9)
        printf("%c%c", c1, c3);
}