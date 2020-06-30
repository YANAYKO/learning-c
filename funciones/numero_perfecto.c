/*
    An integer number is said to be a perfect numberif its factors, including 1 (but not the number itself), 
    sum to the number. For example, 6 is a perfect number because 6 = 1 + 2 + 3. Write a function isPerfect 
    that determines whether parameter number is a perfect num-ber. Use this function in a program that 
    determines and prints all the perfect numbers between 1 and 1000. Print the factors of each perfect 
    number to confirm that the number is indeed perfect. Challenge the power of your computer by testing 
    numbers much larger than 1000.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPerfect(int n);

int main(void)
{
    printf("Umeros perfectos: \n");

    for (int num = 1; num < 1000; num++)
    {
        if (isPerfect(num))
        {
            for (int i = 1; i < num; i++)
            {
                if (num % i == 0)
                    printf("%d + ", i);
            }
            printf("\b\b= %d\n", num);
        }
    }
    

    return EXIT_SUCCESS;
}

bool isPerfect(int n)
{
    int sum_divisor = 0;
    
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum_divisor += i;
    }

    if (sum_divisor == n)
        return true;
    else
        return false;
}