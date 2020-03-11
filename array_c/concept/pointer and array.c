#include<stdio.h>
int main()
{
    int i=3,*x;
    float j=12,*y;
    double l=2,*w;
    char k='c',*z;
    printf("Value of i = %d\n",i);
    printf("Value of j = %f\n",j);
    printf("Value of j = %e\n",l);
    printf("Value of k = %c\n\n",k);
    x=&i; y=&j; w=&l; z=&k;
    printf("Original address in x = %u\n",x);
    printf("Original address in y = %u\n",y);
    printf("Original address in w = %u\n",w);
    printf("Original address in z = %u\n\n",z);
    x++;y++;z++; w++;
    printf("New address in x = %u\n",x);
    printf("New address in y = %u\n",y);
    printf("New address in w = %u\n",w);
    printf("New address in z = %u\n",z);
    return 0;
}