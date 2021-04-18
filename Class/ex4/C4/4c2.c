//4c2
#include "stdio.h"
//#include "math.h"
void main()
{
    //
    //
    int x, y, t, out;
    printf("input int x:");
    scanf("%d", &x);
    printf("input int y:");
    scanf("%d", &y);
    //t = x * x + y * y > 1000;
    if (x * x + y * y > 1000)
    {
        out = (x * x + y * y) / 100;
    }
    else
    {
        out = x + y;
    }
    printf("%d", out);
}