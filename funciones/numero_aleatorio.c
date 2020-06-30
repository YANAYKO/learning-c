/*
    For each of the following sets of integers, write a single statement that will print a number
    at random from the set.
    a) 3, 6, 9, 12, 15, 18, 21, 24, 27, 30.
    b) 3, 5, 7, 9, 11, 13, 15, 17, 19.
    c) 3, 8, 13, 18, 23, 28, 33
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int random1, random2, random3;
    random1 = 3 * (1 + (rand() % 10)); // 3, 6, 9, 12, 15, 18, 21, 24, 27, 30.
    random2 = 2 * (1 + (rand() % 9)) + 1; // 3, 5, 7, 9, 11, 13, 15, 17, 19.
    random3 = 5 * (1 + (rand() % 6)) + 3; // 3, 8, 13, 18, 23, 28, 33

    printf("%d\n", random1);
    printf("%d\n", random2);
    printf("%d\n", random3);
    return EXIT_SUCCESS;
}
