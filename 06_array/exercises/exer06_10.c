/*
    Use a one-dimensional array to solve the following problem. 
    A company pays its salespeople on a commission basis. 
    The salespeople receive $200 per week plus 9% of their gross sales for that week. 
    For example, a salesperson who grosses $3,000 in sales in a week receives 
    $200 plus 9% of $3,000, or a total of $470. Write a C program (using an array of counters) 
    that determines how many of the salespeople earned salaries in each of the following ranges 
    (assume that each salesperson’s salary is truncated to an integer amount):
        a) $200–299
        b) $300–399
        c) $400–499
        d) $500–599
        e) $600–699
        f) $700–799
        g) $800–899
        h) $900–999
        i) $1000 and over
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 9

int main(void)
{
    unsigned int salario, ventas; 
    unsigned int ctr_salario[SIZE] = {0};
    unsigned int i = 1;
    
    puts("Calculo del salario para 10 trabajadores:");

    do {
        printf("Salario del trabajador %u: ", i);
        scanf("%u", &ventas);

        salario = ventas + 200 + 0.9 * ventas;
        
        if (salario >= 200 && salario <= 299)
            ctr_salario[0]++;
        
        if (salario >= 300 && salario <= 399)
            ctr_salario[1]++;
        
        if (salario >= 400 && salario <= 499)
            ctr_salario[2]++;
        
        if (salario >= 500 && salario <= 599)
            ctr_salario[3]++;

        if (salario >= 600 && salario <= 699)
            ctr_salario[4]++;

        if (salario >= 700 && salario <= 799)
            ctr_salario[5]++;

        if (salario >= 800 && salario <= 899)
            ctr_salario[6]++;

        if (salario >= 900 && salario <= 999)
            ctr_salario[7]++;

        if (salario >= 1000)
            ctr_salario[8]++;

        i++;
    } while (i <= 10);

    // resultados
    puts("Resultados:");
    for (size_t i = 0, j = 200; i < SIZE; ++i, j += 100)
    {
        if (j < 1000)
            printf("%u - %u : %u\n", j, j + 99, ctr_salario[i]);
        else
            printf("%u and over : %u\n", j, ctr_salario[i]);
    }

    return EXIT_SUCCESS;
}