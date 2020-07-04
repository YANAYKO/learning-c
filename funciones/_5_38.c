/*
    5.38
    (Visualizing Recursion) It’s interesting to watch recursion “in action.” Modify the factorial
    function of Fig. 5.18 to print its local variable and recursive call parameter. For each recursive call,
    display the outputs on a separate line and add a level of indentation. Do your utmost to make the
    outputs clear, interesting and meaningful. Your goal here is to design and implement an output for-
    mat that helps a person understand recursion better. You may want to add such display capabilities
    to the many other recursion examples and exercises throughout the text.
*/

#include <stdio.h>
#include <stdlib.h>

unsigned long long int factorial(unsigned int);

int main(void)
{
    unsigned int number;
    puts("Mostrando la recursion.");
    printf("Ingrese n: ");
    scanf("%u", &number);
    
    printf("%u! = %llu\n", number, factorial(number));

    return EXIT_SUCCESS;
}

unsigned long long int factorial(unsigned int n)
{
    printf("%u * %u\n", n, n - 1);
    // caso base
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}