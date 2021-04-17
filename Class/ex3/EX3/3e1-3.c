#include "stdio.h"

void main()
{
    int a, b;
    char c;
    scanf("%d%c%d", &a, &c, &b);
    printf("a=%d,b=%d,c=%c\n", a, b, c);
    scanf("%d,%c,%d", &a, &c, &b);
    printf("a=%d,b=%d,c=%c\n", a, b, c);
}
