/*GB2312*/
//4c7
#include "stdio.h"
#include "math.h"
void main()
{
    //
    //
    int input, num100, num50;
    printf("input(<=2000):");
    scanf("%d", &input);
    if (input % 50 == 0 && input <= 2000)
    {
        num100 = input / 100;
        num50 = (input - num100 * 100) / 50;
        printf("100:%d\n", num100);
        printf("50:%d\n", num50);
    }
    else
    {
        printf("ERRO");
    }
}