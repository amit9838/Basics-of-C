#include<stdio.h>
main()
{
int iy,fy,t,pop,y;
float x,tot,rate;
printf("Enter initial population: ");
scanf("%d",&pop);
printf("Enter the year of population counting initilialization:  ");
scanf("%d",&iy);
printf("Enter the year whose population you want to calcualte:  ");
scanf("%d",&fy);
printf("Enter rate of populatioin increment in %: ");
scanf("%f",&rate);
x=rate/100;
t=fy-iy;
tot = pop;
for(y=1;y<=t;y++)
{
tot+=tot*0.1;
}
printf("\n%f",tot);
return 0;
}