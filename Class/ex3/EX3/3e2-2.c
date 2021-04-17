#include "stdio.h"
#include "math.h"

void main()
{
    double a, b, c, x1, x2;
    scanf("%d%d%d", &a, &b, &c);
    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    printf("x1=%f\nx2=%f\n", x1, x2);
}