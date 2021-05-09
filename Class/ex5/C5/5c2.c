#include "stdio.h"
#include "math.h"

void main()
{
    int x1, x2, min, i = 1, ans;
    scanf("%d", &x1);
    scanf("%d", &x2);

    if (x1 > x2)
    {
        min = x2;
    }
    else
    {
        min = x1;
    }

    while (i <= min)
    {
        if (x1 % i == 0 && x2 % i == 0)
        {
            ans = i;
        }
        i++;
    }
    printf("max_div:%d", ans);
}