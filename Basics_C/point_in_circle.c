#include<stdio.h>
main()
{
    int x,y,r,a;
    printf("Enter the value of x,y,r: ");
    scanf("%d%d%d",&x,&y,&r);
    a= (x*x) + (y*y); 
    if (a<(r*r))
    printf("Point is inside the circle");
    else;
    printf("Point is out of the circle");
return 0;
}