#include "stdio.h"
#include "math.h"

void main()
{
    //While
    float e = 1, i = 1, d = 1;
    float mid;
    int n;

    while (d >= 10e-6)
    {
        n = 1;
        mid = 1;
        while (n <= i) //!
        {
            mid *= n;
            n++;
        }
        d = 1.0 / mid;
        e += d;
        i++;
    }
    printf("While:%f\n", e);

    //Do-While
    e = 1, i = 1, d = 1;
    do
    {
        n = 1;
        mid = 1;
        do
        {
            mid *= n;
            n++;
        } while (n <= i);
        d = 1.0 / mid;
        e += d;
        i++;
    } while (d >= 10e-6);
    printf("Do-While:%f\n", e);

    //For
    e = 1.0, i = 1.0, d = 1.0;
    for (i = 1; d > 10e-6; i++)
    {
        mid = 1;
        for (n = 1; n <= i; n++)
        {
            mid *= n;
        }
        d = 1.0 / mid;
        e += d;
    }
    printf("For:%f\n", e);
}