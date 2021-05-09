#include "stdio.h"
#include "math.h"

void main()
{
    int i = 1;
    for (i = 1; !(i % 2 == 1 && i % 3 == 0 && i % 4 == 1 && i % 5 == 4 && i % 6 == 3 && i % 7 == 0 && i % 8 == 1 && i % 9 == 0); i++)
        ;
    /*
    while (!(i % 2 == 1 && i % 3 == 0 && i % 4 == 1 && i % 5 == 4 && i % 6 == 3 && i % 7 == 0 && i % 8 == 1 && i % 9 == 0))
    {
        i++;
    }
    */
    printf("%d", i);
    scanf("", &i);
}