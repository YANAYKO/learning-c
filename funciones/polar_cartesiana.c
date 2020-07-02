#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void convertir_polar_a_cartesiano(double, double);

int main(void)
{
    double radio, angulo;

    puts("Conversion de coordenadas polares a cartesianas.");
    
    printf("Radio: ");
    scanf("%lf", &radio);

    printf("Angulo: ");
    scanf("%lf", &angulo);

    convertir_polar_a_cartesiano(radio, angulo);
    
    return EXIT_SUCCESS;
}

void convertir_polar_a_cartesiano(double r, double ang)
{
    double x, y;
    x = r * cos(ang);
    y = r * sin(ang);

    printf("x: %.2f, y: %.2f\n", x, y);
}