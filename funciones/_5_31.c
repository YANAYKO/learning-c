/*
    (Coin Tossing) Write a program that simulates coin tossing. For each toss of the coin the
    program should print Heads or Tails. Let the program toss the coin 100 times, and count 
    the number of times each side of the coin appears. Print the results. The program should call a 
    separate function flip  that  takes  no  arguments  and  returns  0  for  tails  and  1  for  heads.  
    [Note: If  the  program realistically simulates the coin tossing, then each side of the coin should 
    appear approximately half the time for a total of approximately 50 heads and 50 tails.]
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip();

int main(void)
{
    srand(time(NULL));
    int c_tail = 0, c_head = 0;

    for (int i = 0; i < 100; ++i)
    {
        if (flip() == 1)
        {
            puts("Head");
            c_head++;
        } else {
            puts("Tail");
            c_tail++;
        }
        //printf("%d\n", flip());
    }
    puts("------Resultado------");
    printf("%s: %d\n", "Tails", c_tail);
    printf("%s: %d\n", "Heads", c_head);
    return EXIT_SUCCESS;
}

int flip()
{
    return (rand() % 2); // 0  for  tails  and  1  for  heads
}