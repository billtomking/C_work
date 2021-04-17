#include "stdio.h"

int main()
{
    int num = 236, ge, shi, bai;
    ge = num % 10;
    shi = (num / 10) % 10;
    bai = (num / 100) % 10;
    printf("百位上数字是:%d,十位上数字是:%d,个位上数字是:%d \n", bai, shi, ge);
    return 0;
}