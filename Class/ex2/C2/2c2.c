#include "stdio.h"
#include "math.h"

void main()
{
    int x1 = 3, y1 = 8, x2 = 7, y2 = 10;
    float dist;
    dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    printf("��(%d,%d)����(%d,%d)�ľ�����:%f", x1, y1, x2, y2, dist);
}
