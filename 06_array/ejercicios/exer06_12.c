/*
    Write loops that perform each of the following one-dimensional array operations:
        a) Read the 20 elements of double array  sales from the keyboard.
        b) Add 1000 to each of the 75 elements of double array  allowance.
        c) Initialize the 50 elements of integer array  numbers to zero.
        d) Print the 10 values of integer array  GPA in column format.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // a) Read the 20 elements of double array  sales from the keyboard
    double sales[20] = {0};
    
    for (size_t i = 0; i < 20; ++i)
    {
        scanf("%llf", &sales[i]);
    }

    // b) Add 1000 to each of the 75 elements of double array  allowance.
    double allowance[75] = {0};

    for (size_t i = 0; i < 75; ++i)
    {
        allowance[i] = 1000;
    }

    // c) Initialize the 50 elements of integer array  numbers to zero.
    int numbers[50];

    for (size_t i = 0; i < 50; ++i)
    {
        numbers[i] = 0;
    }

    // d) Print the 10 values of integer array  GPA in column format.
    int GPA[10] = {12, 45, 10, 20, 30, 40, 50, 78, 45, 10};

    for (size_t i = 0; i < 10; ++i)
    {
        printf("GPA[%u] = %d\n", i, GPA[i]);
    }

    return EXIT_SUCCESS;
}