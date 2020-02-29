#include<stdio.h>
void main()
{
    int i,n,c=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i!=0)
           
{
    c=c+1;

}}
if(c==0)
{
    printf("number is prime");
}
else
{
    printf("not prime");
}}