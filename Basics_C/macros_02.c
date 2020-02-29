#include<stdio.h>
#define AREA(x)(3.14*x*x)
int main()
{
    float r1=2,r2=4,a;
    a=AREA(r1);
    printf("Area(C1) = %f\n",a);
    a=AREA(r2);
    printf("Area(C2) = %f\n",a);
    return 0;
}