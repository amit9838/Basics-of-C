#include<stdio.h>
main()
{
    int i,x,m;
    int j=1,k=1;
    
    for(i=1;i<5;i++)
        {
            for(m=3;m>=i;m--)
             {
                printf(" ");
             }
            for(x=1;x<=i;x++)
                {
                printf("%d ",k);
                k++;
                }
                printf("\n");}
return 0;        
}