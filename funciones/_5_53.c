/*

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pregunta(unsigned int, unsigned int);
void mensaje(unsigned int);
int random_msg(unsigned int, unsigned int);
unsigned int menu(void);
int random_diff(unsigned int);

int main(void)
{
    srand(time(NULL));

    unsigned int r, a, b, res;
    unsigned int correct = 0, incorrect = 0;
    unsigned int diff;
    diff = menu();
    


    printf("Preguntas de multiplicacion [Nivel %u]:\n", diff);
    while (1) 
    {
        a = random_diff(diff); // multiplicando
        b = random_diff(diff); // multiplicador
        r = a * b; // guarda el resultado de la multiplicacion a * b

        pregunta(a, b); // nueva pregunta
        scanf("%u", &res); // lee la respuesta desde consola

        if (r == res)
        {
            correct++;
            mensaje(random_msg(1, 4)); // mensaje para mostrar, depende del parametro 1 - 4
        } else { 
            incorrect++; // suma la primera respuesta erronea
            while (incorrect != (10 - correct) && r != res) // el loop se repite hasta que el usuario acierte la respuesta
            {
                mensaje(random_msg(5, 8)); // mensaje recibe como parametro un numero aleatorio de 5 - 8
                pregunta(a, b); // realiza la misma pregunta
                scanf("%u", &res); // lee una respuesta desde consola
                incorrect++;
            }
        }

        if (correct + incorrect == 10) // las suma  de las resputas correctas e incorrectas deben ser 10
        {
            printf("Correctas: %d\nIncorrectas: %d\n", correct, incorrect);
            if (correct * 10 < 75)
                puts("Please ask your teacher for extra help.");
            else
                puts("Congratulations, you are ready to go to the next level!");
            
            puts("Intentalo de nuevo: ");
            correct = 0;
            incorrect = 0;
        }   
    }
    
    return EXIT_SUCCESS;
}

unsigned int menu(void)
{
    unsigned int dificultad;
    puts("Escoga una dificultad: ");
    puts("Dificultad 1 (1 digito)");
    puts("Dificultad 2 (2 digitos)");
    puts("Dificultad 3 (3 digitos)");
    puts("Dificultad 4 (4 digitos)");
    printf("Ingreselo: ");
    scanf("%u", &dificultad);
    return dificultad;
}

int random_msg(unsigned int n, unsigned int m)
{
    return (rand() % (m - n + 1) + n); // rand() % (max - min + 1) + min
}

int random_diff(unsigned int d)
{
    switch (d)
    {
        case 1: // 1 - 9
            return (rand() % 9 + 1);
            break;
        case 2: // 10 - 99
            return (rand() % 90 + 10);
            break;
        case 3: // 100 - 999
            return (rand() % 900 + 100);
            break;
        case 4: // 1000 - 9999
            return (rand() % 9000 + 1000);
            break;
    }
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