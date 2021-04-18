//4c5
#include "stdio.h"
//#include "math.h"
void main()
{
    //
    //
    float p, w, s, d, f;

    printf("input float p:");
    scanf("%f", &p);
    printf("input float w:");
    scanf("%f", &w);
    printf("input float s:");
    scanf("%f", &s);

    if (s < 0)
        printf("s ERRO");
    else if (s < 250)
        d = 0.0;
    else if (s < 500)
        d = 0.02;
    else if (s < 1000)
        d = 0.05;
    else if (s < 2000)
        d = 0.08;
    else if (s < 3000)
        d = 0.10;
    else //if (s >= 3000)
        d = 0.15;

    f = p * w * s * (1 - d);
    printf("Fee=%f", f);
}