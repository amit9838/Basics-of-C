#include<stdio.h>
main()
{
    int i=1,j,f,sum;
    sum=0;
    while(i<=7)
    {   f=1;
        
        for ( j = 1; j <= i; j++)
            { 
                  
                f=f*j;  
            }
            printf("%d",f);
            printf("\n");
            i++;
            sum=sum+f;
    }
    printf("Sum of factorials till 7 is:  %d ",sum);
return 0;
}