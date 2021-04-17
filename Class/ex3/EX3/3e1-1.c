#include "stdio.h"

int main()
{
    char ch;
    
    printf("input a char:\n");
    ch = getchar();

    putchar('\n');
    putchar(ch);
    putchar('\n');

    ch = 'A';
    ch = ch + 32;
    putchar(ch);
    return 0;
}
