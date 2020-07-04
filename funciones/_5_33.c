/*
    5.33
    (Guess the Number Modification) Modify the program of Exercise 5.32 to count the number of guesses 
    the player makes. 
    If the number is 10 or fewer, print Either you know the secret or you got lucky! 
    If the player guesses the number in 10 tries, then print Ahah! You know the secret!
    If the player makes more than 10 guesses, then print You should be able to do better! 
    Why should it take no more than 10 guesses? Well, with each “good guess” 
    the player should be able to eliminate half of the numbers. 
    Now show why any number 1 to 1000 can be guessed in 10 or fewer tries.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void guess_the_number(void);
unsigned int c; // variable global

int main(void)
{
    // genera un seed
    srand(time(NULL));

    char decision;

    printf("I have a number between 1 and 1000.\nCan you guess my number?\n");
    
    guess_the_number(); // primera llamada para comenzar el juego
    
    do {
        if (c < 10 )
            printf("%s", "you got lucky!\n");
        if (c == 10)
            printf("%s", "Ahah! You know the secret!\n");
        if (c > 10)
            printf("%s", "You should be able to do better!\n");

        printf("Would you like to play again (y or n)? ");
        scanf(" %c", &decision); // lee la decision del usuario para continuar

        if (decision == 'y') guess_the_number(); // si el usuario elige continuar, se llama de nuevo a la funcion
    } while (decision != 'n'); // el bucle termina cuando el usuario escribe 'n'

    return EXIT_SUCCESS;
}

void guess_the_number(void)
{
    unsigned int n, n_guess; // n es el input del usuario, n_gues es el numero que se adivinara
    bool encontrado; // variable logica para verificar si se encontro el numero
    c = 0; // contador inicia en 0

    n_guess =  1 + (rand() % 1000); // genera un numero aleatorio entre 1 - 1000
    encontrado = false; // false significa que aun el usuario no ha adivinado el numero

    printf("type your first guess: ");
    do {
        scanf("%d", &n); // input desde consola
        c++; // cuenta el numero de intentos
        if (n < n_guess)
            printf("Too low. Try again.\n");
        
        if (n > n_guess)
            printf("Too high. Try again.\n");
        
        if (n == n_guess)
        {
            printf("Excellent! You guessed the number!\n");
            encontrado = true;
        }
    } while (!encontrado);
}
