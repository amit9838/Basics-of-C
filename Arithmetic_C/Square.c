#include<stdio.h>
int main()
{
    int a,sq;
    printf("Enter a no:   ");
    scanf("%d",&a);
    sq = square(a);
    printf("Squre of %d is :  %d\n",a,sq);
}
int square(int x)
{
int d;
d = x*x;
return d;
}
