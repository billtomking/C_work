#include "stdio.h"
//#include "math.h"

void main()
{
    //While
    int sum = 0, i = 1;
    while (i <= 100)
    {
        sum += i * i;
        i++;
    }
    printf("While:%d\n", sum);

    //Do-While
    sum = 0, i = 1;
    do
    {
        sum += i * i;
        i++;
    } while (i <= 100);
    printf("Do-While:%d\n", sum);

    //For
    sum = 0;
    i = 1;
    for (i = 1; i <= 100; i++)
    {
        sum += i * i;
    }
    printf("For:%d\n", sum);
}