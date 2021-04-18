#include "stdio.h"
//#include "math.h"
void main()
{
    //
    //
    int num;
    printf("input a int:");
    scanf("%d", &num);
    if (num % 5 == 0 && num % 7 == 0)
        printf("Yes");
    else
        printf("No");
}