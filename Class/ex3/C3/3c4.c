#include "stdio.h"

int main()
{
    double zong, time, perh, ying;

    printf("work hours ?\n");
    scanf("%lf", &time);

    printf("money per H?\n");
    scanf("%lf", &perh);

    zong = time * perh;
    ying = 0.9 * zong;

    printf("Ying Fa = %f\n", ying);
    
    return 0;
}
