/*
    bisiesto -> febrero -> 29 dias
    bisiesto si
        a % 4 == 0 && a % 100 != 0 && a % 400 == 0
    
    enero       31
    febrero     28/29
    marzo       31
    abril       30
    mayo        31
    junio       30
    julio       31
    agosto      31
    septiembre  30
    octubre     31
    noviembre   30
    diciembre   31
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// prototipo
bool verificar_fecha(int, int, int);
bool es_bisiesto(int);

int main(void)
{
    int day, month, year;
    
    printf("Ingrese una fecha: ");
    scanf("%d %d %d", &day, &month, &year);

    verificar_fecha(day, month, year) ? printf("Valido\n") : printf("No Valido\n");
    
    return EXIT_SUCCESS;
}

bool verificar_fecha(int d, int m, int a)
{
    if (m > 0 && d > 0 && a > 0)
    {
        switch (m) {
            case 1:  if(d <= 31) return true;
                     else return false; break;
            case 2: 
                if(es_bisiesto(a) && d <= 29) {
                    return true;
                } else { 
                    if (d <= 28) return true;
                    else return false;
                }
                break;
            case 3:  if(d <= 30) return true; 
                     else return false; break;
            case 4:  if(d <= 30) return true; 
                     else return false; break;
            case 5:  if(d <= 31) return true;
                     else return false; break;
            case 6:  if(d <= 30) return true;
                     else return false; break;
            case 7:  if(d <= 31) return true;
                     else return false; break;
            case 8:  if(d <= 31) return true;
                     else return false; break;
            case 9:  if(d <= 30) return true;
                     else return false; break;
            case 10: if(d <= 31) return true;
                     else return false; break;
            case 11: if(d <= 30) return true;
                     else return false; break;
            case 12: if(d <= 31) return true;
                     else return false; break;
            default: return false; break;
        }
    }
}

bool es_bisiesto(int year)
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)); // el year no debe ser divisible entre 100
}
