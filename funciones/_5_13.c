/*
    Write statements that assign random integers to the variable n in the following ranges:
    a) 1 <= n <= 6
    b) 100 <= n <= 1000
    c) 0 <= n <=19
    d) 1000 <= n <= 2222
    e) -1 <= n <= 1
    f) -3 <= n <= 11
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    //seed
    srand(time(NULL));

    int r1, r2, r3, r4, r5, r6;

    r1 = 1 + (rand() % 6);
    r2 = 100 + (rand() % 1000);
    r3 = 0 + (rand() % 19);
    r4 = 1000 + (rand() % 2222);
    r5 = -1 + (rand() % 1);
    r6 = -3 + (rand() % 11);

    printf("%d\n", r1);
    printf("%d\n", r2);
    printf("%d\n", r3);
    printf("%d\n", r4);
    printf("%d\n", r5);
    printf("%d\n", r6);

    return EXIT_SUCCESS;
}