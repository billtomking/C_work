#include "stdio.h"
#include "math.h"

void main()
{
    int i = 1;
    while (i < 1000)
    {
        if (i % 5 == 2 && i % 7 == 3 && i % 3 == 1)
        {
            printf("%d\n", i);
        }
        i++;
    }
}