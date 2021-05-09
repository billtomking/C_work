#include "stdio.h"
#include "math.h"

void main()
{
    int i, n1, n2, n3, s;
    for (i = 100; i < 1000; i++)
    {
        n1 = i / 100;
        n2 = (i / 10) % 10;
        n3 = i % 10;
        s = pow(n1, 3) + pow(n2, 3) + pow(n3, 3);
        if (s == i)
        {
            printf("%d\n", i);
        }
    }
}