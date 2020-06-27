#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n, int i);

int main(void)
{
    for (int n = 2; n <= 70; n++) // bucle para mostrar los numeros primos entre 2 y 50
    {
        if (isPrime(n, n / 2)) // si el numero es primo, se muestra por consola
            printf("%d ", n);
    }
    return EXIT_SUCCESS;
}

/*
    La funcion se ejecuta recursivamente para comprobar si un numero es primo.
    El parametro n es el numero que se va a comprobar
    El parametro i es el divisor que tomara el valor n / 2, es decir, comenzara desde la mitad de n
    
    La funcion comienza comprobando si i es 0, si a la primera llamada es 1, entonces el numero n es un numero 
    primo y envia un valor de retorno true a la funcion llamadora, ocacionando que la recursion termine.

    En el caso de que i sea mayor que 1, entonces se procede a ejecutar el bloque else.

    Dentro de bloque else se comprueba si el resto de la division es exacta, es decir, la operacion
    n % i es 0 (el cociente es cero), donde el divisor i esta dentro del rango  2 <= i <= n / 2 y cualquier valor 
    dentro de este que divida exactamente a n se considera como NO primo y devuelve false a la funcion llamadora 
    y la recursion termina. En caso contrario, donde n % i es diferente de 0, es decir, la division no es exacta,
    se procede a realizar una llamada a la misma funcion, pasando como argumentos el numero n y disminuyendo en 1
    el valor de i

    Ejemplos: 
    21 no es primo:  21 / 2 = 10 ->  se llama a la funcion isPrime(21, 10)
    el intervalo de divisores es 2 <= x <= 10,
    desde 10 se empieza a dividir y se decrementa en 1 hasta llegar a 1, donde se considera un numero primo
    10  -> 21 % 10 = 1 division inexacta ->  luego se llama a la funcion isPrime(21, 9)
    9   -> 21 % 9 = 3  division inexacta ->  luego se llama a la funcion isPrime(21, 8)
    8   -> 21 % 8 = 5  division inexacta ->  luego se llama a la funcion isPrime(21, 7)
    7   -> 21 % 7 = 0 <- division exacta con el valor i dentro del intervalor 2 <= i <= 10 y no deja un resto, 
    por lo tanto no es un numero primo


    13 es primo... 13 / 2 = 6 ->  se llama a la funcion isPrime(13, 6)
    el intervalo de divisores es 2 <= x <= 6
    6 -> 13 % 6 = 1 division inexacta ->  luego se llama a la funcion isPrime(13, 5)
    5 -> 13 % 5 = 3 division inexacta ->  luego se llama a la funcion isPrime(13, 4)
    4 -> 13 % 4 = 1 division inexacta ->  luego se llama a la funcion isPrime(13, 3)
    3 -> 13 % 3 = 1 division inexacta ->  luego se llama a la funcion isPrime(13, 2)
    2 -> 13 % 2 = 1 division inexacta ->  luego se llama a la funcion isPrime(13, 1)
    1 -> 13 % 1 = 0 < division exacta con el valor de i = 1, significa que 13 es un numero primo

    5 es primo... 5 / 2 = 2 ->  se llama a la funcion isPrime(5, 2)
    2 -> 5 % 2 = 1 division inexacta
    1 -> 5 % 1 = 0 <- division exacta con el valor i = 1, significa que 5 es un numero primo
*/
bool isPrime(int n, int i)
{
    if (i == 1) // si el resultado llega a 1, la recursividad termina
    {
        return true;
    } else {
        if (n % i == 0) // 21 % 7 = 1
            return false;
        else
            isPrime(n, i - 1);
    }
}