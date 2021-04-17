#define PI 3.1415926
#include "stdio.h"
#include "math.h"

void main()
{
    float R_i = 15, R_o = 25, S;
    S = (pow(R_o, 2) - pow(R_i, 2)) * PI;
    printf("外半径%f，内半径%f的圆环面积为%fcm^2", R_o, R_i, S);
}