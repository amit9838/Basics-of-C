#include<stdio.h>
int factorial(int a);
int main()
{
    
    int fact,a;
    printf("\n***************Factorial Calculator(recursion)**************\n\n");
    printf("Enter a number:  ");
    scanf("%d",&a);
    fact = factorial(a);
    printf("factorial of %d is :  %d\n",a,fact);
    return 0;
}
int factorial(int x)
{
    int t=1;
    if(x==1)
        return(1);
    
    else
    {
        t = x*factorial(x-1);
        return(t);
    }
    
}