/*
    (Fibonacci) The Fibonacci series
        0, 1, 1, 2, 3, 5, 8, 13, 21, ...
    
    begins with the terms 0 and 1 and has the property that each succeeding term is the sum of the two
    preceding terms. 
    a) Write a nonrecursive function fibonacci(n) that calculates the nth Fibonacci
    number. Use unsigned int for the function’s parameter and unsigned long long int for its return
    type. 
    b) Determine the largest Fibonacci number that can be printed on your system. 
*/

#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int);

int main(void)
{
    unsigned int n;
    puts("The Fibonacci series.");
    printf("El el nth termino: ");
    scanf("%u", &n);

    printf("El termino %u es: %llu\n", n, fibonacci(n));

    return EXIT_SUCCESS;
}

unsigned long long int fibonacci(unsigned int n)
{
    unsigned long long int a, b, fib;
    a = 0;
    b = 1;

    if (n == 1)
    {
        fib = a;
    } else if (n == 2)
        fib = b;

    for (int i = 2; i < n; ++i)
    {
        fib = a + b;
        a = b;
        b = fib;
    }

    return fib;
}