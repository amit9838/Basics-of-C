#include<stdio.h>
int power(int x,int y);
int main()
{
    int a=3,b=2,ans;
    printf("*************Power Calculator************\n\n\n");
    printf("(a)^(b)=?\n\n");
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    ans = power(a,b);
    printf("\nValue of:\n (%d)^(%d) = %d\n\n",a,b,ans);
    return 0;
}
int power(int x,int y)
{
    int i,t=1;
    for(i=1;i<=y;i++)
    
        t=t*x;
    return (t);
}