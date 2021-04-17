#include "stdio.h"

int main()
{
    int a,b,c,a1,b1,c1;
    printf("first:");
    scanf("%d",&a);
    printf("second:");
    scanf("%d",&b);
    printf("third:");
    scanf("%d",&c);

    a1=a;
    b1=b;
    c1=c;

    b=a1;
    c=b1;
    a=c1;

    printf("input:%d-%d-%d\toutput:%d-%d-%d",a1,b1,c1,a,b,c);
    return 0;
}
