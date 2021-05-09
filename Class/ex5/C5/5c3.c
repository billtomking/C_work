#include "stdio.h"
#include "math.h"

void main()
{
    int x, y, ans, i;
    scanf("%d", &x);
    scanf("%d", &y);

    ans = pow(x, y);
    printf("%d\n", ans);
    for (i = 1; i <= 3; i++)
    {
        printf("%d\n", ans % 10);
        ans = ans / 10;
    }
}