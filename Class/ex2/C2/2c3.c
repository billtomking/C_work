#define PI 3.1415926
#include "stdio.h"
#include "math.h"

void main()
{
    float R_i = 15, R_o = 25, S;
    S = (pow(R_o, 2) - pow(R_i, 2)) * PI;
    printf("��뾶%f���ڰ뾶%f��Բ�����Ϊ%fcm^2", R_o, R_i, S);
}