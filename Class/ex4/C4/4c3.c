//4c3
#include "stdio.h"
#include "math.h"
void main()
{
    //
    //
    float x, y;
    printf("input float x:");
    scanf("%f", &x);
    if (x > 2)
    {
        y = sqrt(x * x + x + 1);
    }
    else if (x >= -2)
    {
        y = pow(2, x) + x;
    }
    else if (x < -2)
    {
        y = x * x - sin(x);
    }
    else
    {
        printf("ERRO");
    }
    printf("%f", y);
}