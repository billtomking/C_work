//4c4
#include "stdio.h"
//#include "math.h"
void main()
{
    //
    //
    int num;
    int wan, qian, shi, ge;
    printf("input int num:");
    scanf("%d", &num);
    wan = num / 10000;
    qian = num / 1000 % 10;
    shi = num / 10 % 10;
    ge = num % 10;
    if (wan == ge && qian == shi)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}