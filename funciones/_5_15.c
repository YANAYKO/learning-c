/*
    Hypotenuse Calculations
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double get_hypotenuse(double, double);

int main(void)
{
    double l1, l2;
    
    printf("%s", "Ingresa los lados del triangulo rectangulo (a y b): ");
    scanf("%lf%lf", &l1, &l2);

    printf("La hipotenusa es: %.2f\n", get_hypotenuse(l1, l2));

    return EXIT_SUCCESS;
}

double get_hypotenuse(double a, double b)
{
    return sqrt(pow(a, 2) + pow(b, 2));
}