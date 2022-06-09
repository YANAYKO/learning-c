/*
    (Sides of a Triangle) Write a function that reads three nonzero double values as the sides of a
    triangle, and calculates and returns the area of the triangle as a double variable. It should also check
    whether the numbers represent the sides of a triangle before calculating the area. Use this function in
    a program that inputs a series of sets of numbers.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

double get_area(double, double, double);
bool isTriangle(double, double, double);

int main(void)
{
    double l1, l2, l3;
    char decision;
    puts("Calculo del area de un triangulo dado sus lados.");

    do {
        printf("%s", "Ingrese los 3 lados: ");
        scanf("%lf%lf%lf", &l1, &l2, &l3);

        if (isTriangle(l1, l2, l3))
            printf("Area: %.2f\n", get_area(l1, l2, l3));
        else
            puts("El triangulo no existe.");

        printf("%s", "Desea ingresar otros valores? (s/n): ");
        scanf(" %c", &decision);
    } while (decision != 'n');
    
    return EXIT_SUCCESS;
}

double get_area(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

bool isTriangle(double a, double b, double c)
{
    return (a + b > c && a + c > b && b + c > a);
}