#include <stdio.h>
#include <stdlib.h>

int main()
{

int p,n;
float r,si;
printf("Enter the price: ");
scanf("%d",&p);
printf("No of years: ");
scanf("%d",&n);
printf("Rate: ");
scanf("%f",&r);
si=p*n*r/100;
printf("Simple Intrest %f\n",si);
return 0;
}
