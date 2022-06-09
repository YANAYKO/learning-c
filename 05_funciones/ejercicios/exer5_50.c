/*
    5.50
    (Computer-Assisted Instruction) The use of computers in education is referred to as com-
    puter-assisted instruction (CAI). Write a program that will help an elementary school student learn
    multiplication. Use the rand function to produce two positive one-digit integers. The program
    should then prompt the user with a question, such as
    How much is 6 times 7?
    The student then inputs the answer. Next, the program checks the student’s answer. If it’s correct,
    display the message "Very good!" and ask another multiplication question. If the answer is wrong,
    display the message "No. Please try again." and let the student try the same question repeatedly
    until the student finally gets it right. A separate function should be used to generate each new ques-
    tion. This function should be called once when the application begins execution and each time the
    user answers the question correctly. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void pregunta(unsigned int, unsigned int);

int main(void)
{
    srand(time(NULL));
    unsigned int r, a, b;
    unsigned int res;

    
    for (int i = 0; i < 10;  ++i) 
    {
        a = 1 + (rand() % 9);
        b = 1 + (rand() % 9);
        r = a * b;

        pregunta(a, b);

        scanf("%u", &res);
        while (r != res)
        {
            puts("No. Please try again.");
            pregunta(a, b);
            scanf("%u", &res); 
        }
        puts("Very good!.");    
    }
    
    return EXIT_SUCCESS;
}

void pregunta(unsigned int n1, unsigned int n2)
{
    printf("How much is %u times %u?: ", n1, n2);
}