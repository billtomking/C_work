#include "stdio.h"

void main()
{
    int x, y;
    char ver1 = 'x', ver2 = 'y';
    scanf("%d", &x);
    scanf("%d", &y);
    printf("\t%c\t%c\n", ver1, ver2);
    printf("10JZ\t%d\t%d\n", x, y);
    printf("8JZ\t%o\t%o\n", x, y);
    printf("16JZ\t%x\t%x\n", x, y);
}
