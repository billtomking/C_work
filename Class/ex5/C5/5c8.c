#include "stdio.h"
#include "math.h"

void main()
{
    int min = 12, ma, pass;
    pass = 0;
    ma = min + 20;

    while (!(ma / min == 2 && ma % min == 0))
    {
        ma++;
        min++;
        pass++;
    }
    printf("%d\t%d\t%d", min, ma, pass);
}