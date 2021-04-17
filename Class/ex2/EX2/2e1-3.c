#include "stdio.h"

int main()
{
    double radius;
    double area, length;
    radius = 3;
    area = 3.1415926 * radius * radius;
    length = 2 * 3.1415926 * radius;
    printf("area=%f,length=%f", area, length);
    return 0;
}