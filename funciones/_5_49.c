/*
    5.49
    (Global Warming Facts Quiz) The controversial issue of global warming has been widely
    publicized by the film An Inconvenient Truth, featuring former Vice President Al Gore. Mr. Gore
    and a U.N. network of scientists, the Intergovernmental Panel on Climate Change, shared the 2007
    Nobel Peace Prize in recognition of “their efforts to build up and disseminate greater knowledge
    about man-made climate change.” Research both sides of the global warming issue online (you
    might want to search for phrases like “global warming skeptics”). Create a five-question multiple choice 
    quiz on global warming, each question having four possible answers (numbered 1–4). Be ob-
    jective and try to fairly represent both sides of the issue. Next, write an application that administers
    the quiz, calculates the number of correct answers (zero through five) and returns a message to the
    user. If the user correctly answers five questions, print “Excellent”; if four, print “Very good”; if
    three or fewer, print “Time to brush up on your knowledge of global warming,” and include a list
    of some of the websites where you found your facts.
*/

#include <stdio.h>
#include <stdlib.h>

char pregunta1();
char pregunta2();
char pregunta3();
char pregunta4();
char pregunta5();
int calcularRpta(char, char, char, char, char);

int main(void)
{
    puts("Questions – Global Warming");

    char r1, r2, r3, r4, r5;

    r1 = pregunta1();
    r2 = pregunta2();
    r3 = pregunta3();
    r4 = pregunta4();
    r5 = pregunta5();

    int nro_respuesta = calcularRpta(r1, r2, r3, r4, r5);

    if (nro_respuesta == 5)
        puts("Excellent");
    else if (nro_respuesta == 4) {
        puts("Very good");
    } else if (nro_respuesta <= 3) {
        puts("Time to brush up on your knowledge of global warming");
        puts("Lista para aprender mas: ");
        puts("https://www.wwf.org.au/what-we-do/climate/causes-of-global-warming");
        puts("https://climate.nasa.gov/news/2915/the-atmosphere-getting-a-handle-on-carbon-dioxide/");
        puts("https://www.carbonbrief.org/explainer-how-do-scientists-measure-global-temperature");
        puts("https://www.worldwildlife.org/pages/why-are-glaciers-and-sea-ice-melting");
    }

    return EXIT_SUCCESS;
}

char pregunta1()
{
    char rpta;
    puts("1. Which one of the following cause global warming?");
    printf("a) Carbon dioxide\nb) Oxygen\nc) Nitrogen\nd) Hydrogen");
    printf("\nRespuesta: ");
    scanf(" %c", &rpta);
    return rpta;
}

char pregunta2()
{
    char rpta;
    puts("2. How many percent of carbon dioxide increased in the atmosphere since pre-industrial times?");
    printf("a) About 10%\nb) About 20%\nc) About 30%\nd) About 40%");
    printf("\nRespuesta: ");
    scanf(" %c", &rpta);
    return rpta;
}

char pregunta3()
{
    char rpta;
    puts("3. Who measures the global warming rate?");
    printf("a) Astrologers\nb) Physicist\nc) Philosopher\nd) Climatologist");
    printf("\nRespuesta: ");
    scanf(" %c", &rpta);
    return rpta;
}

char pregunta4()
{
    char rpta;
    puts("4. Which one of the following cause global warming?");
    printf("a) Radiative forcing\nb) Earth gravitation force\nc) Oxygen\nd) Centripetal force");
    printf("\nRespuesta: ");
    scanf(" %c", &rpta);
    return rpta;
}

char pregunta5()
{
    char rpta;
    puts("5. What is the main reason for melting of ice sheets?");
    printf("a) Increase in the oxygen content\nb) Global warming\n");
    printf("c) Decrease in carbon dioxide content\nd) Noise pollution");
    printf("\nRespuesta: ");
    scanf(" %c", &rpta);
    return rpta;
}

int calcularRpta(char r1, char r2, char r3, char r4, char r5)
{   
    int c = 0;
    
    if (r1 == 'a')
        c++;
    if (r2 == 'c');
        c++;
    if (r3 == 'd')
        c++;
    if (r4 == 'a')
        c++;
    if (r5 == 'b')
        c++;

    return c;
}