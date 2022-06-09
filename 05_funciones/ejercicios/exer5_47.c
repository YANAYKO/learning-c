/*
    5.47
    (Craps Game Modification) Modify the craps program of Fig. 5.14 to allow wagering. Package as a 
    function the portion of the program that runs one game of craps. Initialize variable bankBalance 
    to 1000 dollars. Prompt the player to enter a wager. Use a while loop to check that wager
    is less than or equal to bankBalance, and if not, prompt the user to reenter wager until a valid wager
    is entered. After a correct wager is entered, run one game of craps. If the player wins, increase
    bankBalance by wager and print the new bankBalance. If the player loses, decrease bankBalance by
    wager, print the new bankBalance, check whether bankBalance has become zero, and if so print the
    message, "Sorry. You busted!" As the game progresses, print various messages to create some “chatter” 
    such as, "Oh, you're going for broke, huh?" or "Aw cmon, take a chance!" or "You're up big.
    Now's the time to cash in your chips!"
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Estado {CONTINUA, GANA, PIERDE};

int lanzarDados(void);
void jugar(unsigned int apuesta);

int bank_Balance = 1000;

int main(void)
{
    // aleatoriza el generador de números aleatorios usando la hora actual
    srand(time(NULL));

    
    int sum;
    unsigned int apuesta;
    char seguir_jugando;

    puts("Craps game con apuesta.");

    printf("Ingrese una apuesta (<= 1000): ");
    scanf("%u", &apuesta);

    while (apuesta > 1000)
    {
        if (apuesta > 1000)
            printf("Ingrese una apuesta valida.\n");
        
        printf("Ingrese una apuesta (<= 1000): ");
        scanf("%u", &apuesta);
    }


    jugar(apuesta);

    do {
        
        if (bank_Balance == 0)
        {
            puts("Sorry. You busted!");
            break;
        }
        printf("Desea seguir jugando? (s/n): ");
        scanf(" %c", &seguir_jugando);

        if (seguir_jugando == 's')
        {
            printf("Ingrese una apuesta (<= %d): ", bank_Balance);
            scanf("%u", &apuesta);
            jugar(apuesta);
        }
    } while (seguir_jugando != 'n');
    

    if (bank_Balance > 0)
    {
        printf("Obteniste:  %d puntos\n", bank_Balance);
    }

    //printf("%u\n", apuesta);
    return EXIT_SUCCESS;
}

void jugar(unsigned int apuesta)
{
    int miPuntaje;
    enum Estado estadoJuego;
    int sum = lanzarDados(); // primera jugada

    // determina el estado del juego basado en la suma de los dados
    switch (sum) 
    {
        // gana en el primer lanzamiento
        case 7:
        case 11:
            estadoJuego = GANA;
            bank_Balance += apuesta;
            printf("Dinero: %u\n", bank_Balance);
            break;
        // pierde en el primer lanzamiento
        case 2:
        case 3:
        case 12:
            estadoJuego = PIERDE;
            bank_Balance -= apuesta;
            printf("Dinero: %u\n", bank_Balance);
            break;
        
        // almacena el puntaje
        default:
            estadoJuego = CONTINUA;
            miPuntaje = sum;
            puts("Aw cmon, take a chance!");
            printf("Puntaje es: %d\n", miPuntaje);
            break;
    }

    while (CONTINUA == estadoJuego && bank_Balance > 0)
    {
        sum = lanzarDados();
        //determina el estado del juego
        if (sum == miPuntaje)
        {
            estadoJuego = GANA;
            bank_Balance += apuesta;
            printf("Dinero:: %u\n", bank_Balance);
        } else {
            if (7 == sum)
            {
                estadoJuego = PIERDE;
                bank_Balance -= apuesta;
                
                printf("Dinero:: %u\n", bank_Balance);
            }
        }
    }

    if (GANA == estadoJuego)
    {
        puts("You're up big. Now's the time to cash in your chips!");
    } else  if (PIERDE == estadoJuego && bank_Balance > 0){
        puts("Oh, you're going for broke, huh?");
    }
}

int lanzarDados(void)
{
    int dado1 = 1 + (rand() % 6);
    int dado2 = 1 + (rand() % 6);

    printf("Player rolled %d + %d = %d\n", dado1, dado2, dado1 + dado2);
    
    return dado1 + dado2;
}