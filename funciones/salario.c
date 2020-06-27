#include <stdio.h>
#include <stdlib.h>

double obtener_salario(int, double);

int main(void)
{
    int hora;
    double sueldo_por_hora;

    printf("Ingrese las horas trabajadas y el sueldo por hora: ");
    scanf("%d %lf", &hora, &sueldo_por_hora);
    
    printf("El sueldo total es: %.2f\n", obtener_salario(hora, sueldo_por_hora));
    return EXIT_SUCCESS;
}

double obtener_salario(int hora, double sueldo_hora)
{
    double sueldo_total;
    if (hora > 40)
    {
        sueldo_total = 40 * sueldo_hora + (hora - 40) * 1.5 * sueldo_hora;
    } else {
        sueldo_total = hora * sueldo_hora;
    }
    return sueldo_total;
}