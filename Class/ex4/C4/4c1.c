//4c1
#include "stdio.h"
#include "math.h"
void main()
{
    //
    //
    float a, b, c, p, s;
    printf("input a:");
    scanf("%f", &a);
    printf("input b:");
    scanf("%f", &b);
    printf("input c:");
    scanf("%f", &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        p = 0.5 * (a + b + c);
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("Area:%f", s);
    }
    else
        printf("Erro");
}