/*
    Write a function that takes the time as three integer arguments (for hours, minutes, and seconds) 
    and returns the number of seconds since the last time the clock “struck 12.” 
    Use this function to calculate the amount of time in seconds between two times, both of which
    are within one 12-hour cycle of the clock.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int tiempo_segundos(unsigned int, unsigned int, unsigned int);

int main(void)
{
    unsigned int h1, m1, s1;
    unsigned int h2, m2, s2;
    signed int diferencia;
    
    printf("%s", "Tiempo 1 (h m s): ");
    scanf("%u%u%u", &h1, &m1, &s1);

    printf("%s", "Tiempo 2 (h m s): ");
    scanf("%u%u%u", &h2, &m2, &s2);

    diferencia = tiempo_segundos(h2, m2, s2) - tiempo_segundos(h1, m1, s1);
    
    printf("Diferencia: %u segundos.", abs(diferencia));
    
    return EXIT_SUCCESS;
}

int tiempo_segundos(unsigned int h, unsigned int m, unsigned int s)
{
    return h * 3600 + m * 60 + s;
}