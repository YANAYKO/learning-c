/*

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pregunta(unsigned int, unsigned int, unsigned int);
void mensaje_positivo();
void mensaje_negativo();
unsigned int menu_dificultad(void);
int random_diff(unsigned int);
unsigned int menu_operacion(void);
int operacion_aritmetica(unsigned int, unsigned int, unsigned int);

int main(void)
{
    srand(time(NULL));

    unsigned int r, a, b, res;
    unsigned int correct = 0;
    unsigned int incorrect = 0;
    unsigned int diff;
    unsigned int operation, random_op;

    operation = menu_operacion(); // es la operacion aritmetica
    diff = menu_dificultad(); // dificultad de la pregunta

    printf("Preguntas de Aritmetica [Nivel %u]:\n", diff);
    while (1) 
    {
        a = random_diff(diff); // primer valor
        b = random_diff(diff); // segundo valor

        if (operation ==  4) // opcion 4 significa cualquier operacion
            random_op = 1 + rand() % 3; // genera cualquier operando
        else
            random_op = operation; // si la operacion no es random

        r = operacion_aritmetica(a, b, random_op); // r es el resultado de la operacion aritmetica

        pregunta(a, b, random_op); // nueva pregunta
        scanf("%u", &res); // lee la respuesta desde consola

        // verificacion de si la respuesta es correcta o no
        if (r != res)
        {
            incorrect++;
            while (incorrect != (10 - correct) && r != res)
            {
                mensaje_negativo(); // mensaje negativo random para mostrar
                pregunta(a, b, random_op); // realiza la misma pregunta
                scanf("%u", &res); // lee una respuesta desde consola
                incorrect++; // cuenta las veces en que se equivoco
            }
        }

        if (r == res) // acierta la respuesta
        {
            correct++;
            mensaje_positivo(); // mensaje positvo random para mostrar
        }

        if (correct + incorrect == 10) // las suma  de las respuestas correctas e incorrectas debe ser 10
        {
            printf("Respuestas correctas: %d\nRespuestas incorrectas: %d\n", correct, incorrect);
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

unsigned int menu_dificultad(void)
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

unsigned int menu_operacion(void)
{
    unsigned int operacion;
    puts("Escoga una operacion aritmetica: ");
    puts("Suma(1)");
    puts("Resta(2)");
    puts("Multiplicacion(3)");
    puts("Aleatorio(4)");
    printf("Ingreselo: ");
    scanf("%u", &operacion);
    return operacion;
}

int operacion_aritmetica(unsigned int a, unsigned int b, unsigned int op)
{
    switch (op)
    {
        case 1:
            return a + b;
            break;
        case 2:
            return a - b;
            break;
        case 3:
            return a * b;
            break;
    }
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

void pregunta(unsigned int n1, unsigned int n2, unsigned int op)
{
    char oper;
    switch (op)
    {
        case 1:
            oper = '+';
            break;
        case 2:
            oper = '-';
            break;
        case 3:
            oper = '*';
            break;
    }
        
    printf("How much is %u %c %u?: ", n1, oper, n2);
}

void mensaje_positivo()
{
    int n = rand() % 4 + 1;
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
    }
}

void mensaje_negativo()
{
    int n = rand() % 4 + 1;
    switch (n)
    {
        case 1:
            puts("No. Please try again.");
            break;
        case 2:
            puts("Wrong. Try once more.");
            break;
        case 3:
            puts("Don't give up!");
            break;
        case 4:
            puts("No. Keep trying.");
            break;
    }
}