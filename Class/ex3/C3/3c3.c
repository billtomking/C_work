#include "stdio.h"

int main()
{
    int input, g, s, b, output;
    scanf("%d", &input);
    g = input % 10;
    b = input / 100;
    s = (input / 10) % 10;
    output = g * 100 + s * 10 + b * 1;
    printf("input:%d\t output:%d", input, output);
    return 0;
}
