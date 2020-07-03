/*
    roots of a quadratic equation
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void quadratic_equation(double, double, double);

int main(void)
{
    double c1, c2, c3;
    
    printf("%s", "Coeficientes: ");
    scanf("%lf%lf%lf", &c1, &c2, &c3); // coeficientes

    quadratic_equation(c1, c2, c3);
    return EXIT_SUCCESS;
}

void quadratic_equation(double a, double b, double c)
{
    double x1, x2;
    double d = b * b - 4 * a * c; // discriminant
    double real, imaginary;

    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);

        puts("Raices reales:");
        printf("x1: %.2f\nx2: %.2f\n", x1, x2);
    } else if (d == 0) {
        x1 = x2 = -b / (2 * a);

        puts("Una raiz:");
        printf("x1: %.2f\nx2: %.2f\n", x1, x2);
    } else {
        real = -b / (2 * a);
        imaginary = sqrt(fabs(d)) / (2 * a);
        
        puts("Raices Imaginarias:");
        printf("x1: %.2f + %.2fi\nx2: %.2f - %.2fi\n", real, imaginary, real, imaginary);
    }
    
}