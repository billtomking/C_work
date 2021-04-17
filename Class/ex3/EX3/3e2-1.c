#include "stdio.h"

void main()
{
    int cup1, cup2;
    int temp;
    
    cup1 = 10;
    cup2 = 32;
    printf("cup1 : %d\n", cup1);
    printf("cup2 : %d\n", cup2);

    temp = cup1;
    cup1 = cup2;
    cup2 = temp;
    printf("cup1 : %d\n", cup1);
    printf("cup2 : %d\n", cup2);
}