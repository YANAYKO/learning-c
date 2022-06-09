/*
    (Quality Points for Student’s Grades) Write a function toQualityPoints that inputs a 
    student’s average and returns 4 it’s 90–100, 3 if it’s 80–89, 2 if it’s 70–79, 
    1 if it’s 60–69, and 0 if the average is lower than 60.
*/

#include <stdio.h>
#include <stdlib.h>

int toQualityPoints(double);

int main(void)
{
    double prom;
    char decision;

    puts("Verificar promedio.");

    do {
        printf("%s", "Ingresar el promedio: ");
        scanf("%lf", &prom);
        printf("Resultado: %d\n", toQualityPoints(prom));
        printf("%s", "Desea ingresar otro promedio? (s/n): ");
        scanf(" %c", &decision);
        
    } while (decision != 'n');
    return EXIT_SUCCESS;
}

int toQualityPoints(double avg)
{
    if (avg >= 90.00 && avg <= 100.00)
    {
        return 4;
    } else if (avg >= 80.00 && avg <= 89.00) {
        return 3;
    } else if (avg >= 70 && avg <= 79) {
        return 2;
    } else if (avg >= 60 && avg <= 69) {
        return 1;
    } else if (avg < 60) {
        return 0;
    }
}