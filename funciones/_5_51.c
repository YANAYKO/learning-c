/*
    5.51
    (Computer-Assisted Instruction: Reducing Student Fatigue) One problem in CAI environments is 
    student fatigue. This can be reduced by varying the computer’s responses to hold the student’s attention. 
    Modify the program of Exercise 5.50 so that various comments are displayed for each answer as follows:
    Possible responses to a correct answer:
        Possible responses to a correct answer:
            Very good!
            Excellent!
            Nice work!
            Keep up the good work!
        Possible responses to an incorrect answer:
            No. Please try again.
            Wrong. Try once more.
            Don't give up!
            No. Keep trying.
    Use random-number generation to choose a number from 1 to 4 that will be used to select
    one of the four appropriate responses to each correct or incorrect answer. Use a switch statement to
    issue the responses. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pregunta(unsigned int, unsigned int);
void mensaje(unsigned int n);
int random(unsigned int n, unsigned int m);

int main(void)
{
    srand(time(NULL));

    unsigned int r, a, b, res;

    
    for (int i = 0; i < 10;  ++i) 
    {
        a = 1 + (rand() % 9); // multiplicando
        b = 1 + (rand() % 9); // multiplicador
        r = a * b; // guarda el resultado de la multiplicacion a * b

        pregunta(a, b); // nueva pregunta
        scanf("%u", &res); // lee la respuesta desde consola

        while (r != res) // si las respuestas no coinciden
        {
            mensaje(random(5, 8)); // mensaje recibe como parametro un numero aleatorio de 5 - 8
            pregunta(a, b); // realiza la misma pregunta
            scanf("%u", &res); // lee una respuesta desde consola
        }
        
        mensaje(random(1, 4)); // mensaje para mostrar, depende del parametro 1 - 4
    }
    
    return EXIT_SUCCESS;
}

int random(unsigned int n, unsigned int m)
{
    return (rand() % (m - n + 1) + n); // rand() % (max - min + 1) + min
}

void pregunta(unsigned int n1, unsigned int n2)
{
    printf("How much is %u times %u?: ", n1, n2);
}

void mensaje(unsigned int n)
{
    switch (n)
    {
        case 1:
            puts("Very good!");
            break;
        case 2:
            puts("Excellent!");
            break;
        case 3:
            puts("Nice work!");
            break;
        case 4:
            puts("Keep up the good work!");
            break;
        case 5:
            puts("No. Please try again.");
            break;
        case 6:
            puts("Wrong. Try once more.");
            break;
        case 7:
            puts("Don't give up!");
            break;
        case 8:
            puts("No. Keep trying.");
            break;
    }
}