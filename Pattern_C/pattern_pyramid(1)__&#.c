#include<stdio.h>
main()
{
    int i,j,k;
    for(i=1;i<=10;i+=2)
    {
        for(j=3;j>=(i/2);j-=1)
        printf("*");
         for(k=1;k<=i;k++)
        printf("#");
        for(j=3;j>=(i/2);j-=1)
        printf("*");
        printf("\n");
    }
return 0;
}