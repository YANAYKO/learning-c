/*
    Mensaje en pantalla:
        I have a number between 1 and 1000.
        Can you guess my number?
        Please type your first guess. 

    Salida cuando el jugador acierta: 
        Excellent! You guessed the number!
        Would you like to play again (y or n)?

    En el caso en que el usuario no acierte:
        Too low. Try again.
        Too high. Try again.
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

void guess_the_number(void);

int main(void)
{
    // genera un seed
    srand(time(NULL));

    char decision;

    printf("I have a number between 1 and 1000.\nCan you guess my number?\n");
    
    guess_the_number(); // primera llamada para comenzar el juego
    
    do {
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

    n_guess =  1 + (rand() % 1000); // genera un numero aleatorio entre 1 - 1000
    encontrado = false; // false significa que aun el usuario no ha adivinado el numero

    printf("type your first guess: ");
    do {
        scanf("%d", &n); // input desde consola
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
