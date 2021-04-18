//4c6
#include "stdio.h"
//#include "math.h"
void main()
{
    int t, f;
    char p;

    printf("(y/n):");
    scanf("%c", &p);
    printf(":");
    scanf("%d", &t);

    if (p == 'y')
    {
        if (t <= 1)
            f = 0;
        else if (t < 8)
            f = 50;
        else
            f = 100;
    }
    else if (p == 'n')
        f = 200;

    printf(":%d", f);
}