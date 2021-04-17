#include "stdio.h"

int main()
{
    char mid, fro, aft;
    mid = getchar();
    fro = mid - 1;
    aft = mid + 1;
    printf("input:%c\tfront:%c\tafter:%c", mid, fro, aft);
    return 0;
}
