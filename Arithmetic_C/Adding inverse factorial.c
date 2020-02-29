#include<stdio.h>
main()
{
    int i=1,j;
    float f,sum;
    sum=0;
    while(i<=3)
    {   f=1;
        
        for ( j = 1; j <= i; j++)
            { 
                  
                f=f*j;  
            }
            printf("   %d",i);
            printf("   %f",f);
            printf("   %f",i/f);
            printf("\n");
            i++;
            sum=sum+(i/f); 
            printf("   %f",sum);
    }
    printf("Sum of 1/1! + 2/2! + 3/! till 7 is:  %f ",sum);
return 0;
}