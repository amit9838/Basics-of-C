#include<stdio.h>
int factorial();
int main()
{
int f,a;
printf("***********FACTORIAL CALCULATOR***********\n\n");
printf("Enter the number: ");
scanf("%d",&a);
f = factorial(a);
printf("\n\nFactorial of %d is :  %d\n",a,f);
return 0;

// return 0
}
int factorial(int x)
{
    int i,t;
    t=1;
    for(i=1;i<=x;i++)
        t=t*i;
    return t;
}
