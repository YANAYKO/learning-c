#include <stdio.h>
#include <stdlib.h>

void formatear_fecha(int, int ,int);

int main(void)
{
    int day, month, year;
    puts("Ingrese el dia, mes y year: ");
    scanf("%d%d%d", &day, &month, &year);

    formatear_fecha(day, month, year);
    return EXIT_SUCCESS;
}

void formatear_fecha(int d, int m, int a)
{
    if (a < 2000)
    {
        a = a - 1900;
        if (a < 10)
            printf("%d/%d/0%d\n", d, m, a);
        else
            printf("%d/%d/%d\n", d, m, a);
    } else {
        printf("%d/%d/%d\n", d, m, a);
    }
   
}