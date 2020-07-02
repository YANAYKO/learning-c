#include <stdlib.h>
#include <stdio.h>


int main(void)
{
    static long int x = 1;
    printf("%d\n", x++);
    if(x == 100)
        return EXIT_SUCCESS;
    main();
}