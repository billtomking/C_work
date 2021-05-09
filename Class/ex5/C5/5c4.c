#include "stdio.h"
#include "math.h"

void main()
{
    int x1, x2, x3 = 0;
    while (x3 * 3 < 100)
    {
        //solve the equation
        x1 = 4 * x3 - 100;
        x2 = 200 - 7 * x3;
        if (x1 >= 0 && x2 >= 0)
        {
            printf("G:%d,M:%d,X:%d,price:%d\n", x1, x2, x3 * 3, x1 * 5 + x2 * 3 + x3 * 1);
        }
        x3++;
    }
}