#include "stdio.h"
#include "math.h"

void main()
{
    int i, n, m;
    for (i = 1; i <= 4; i++)
    {
        n = 5 - i;
        while (n != 0)
        {
            printf(" ");
            n--;
        }
        printf("****\n");
    }
    printf("\n\n\n\n");
    /////////////////////////////
    i = 1, m = 1, n = 1;
    for (i = 1; i <= 4; i++)
    {
        m = i;
        while (m != 0)
        {
            printf(" ");
            m--;
        }

        n = 8 - i * 2 + 1;
        while (n != 0)
        {
            printf("*");
            n--;
        }
        printf("\n");
    }
}