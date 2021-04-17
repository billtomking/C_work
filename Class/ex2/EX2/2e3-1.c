#include "stdio.h"
#include "math.h"

int main()
{
    int x1, x2, y1, y2;
    double s;
    x1 = 3;
    x2 = 7;
    y1 = 8;
    y2 = 10;
    s = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    printf("%f \n", s);

    return 0;
}
