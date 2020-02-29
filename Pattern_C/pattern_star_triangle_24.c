#include<stdio.h>
main()
{
    int i,j,k;
    int min_stars=1;
    for(i=1;i<=5;i++)
    {
        for(j=4;j>=i;j--)
        {
        printf(" ");}
         for(k=1;k<=min_stars;k++){
        printf("#");
         }
         min_stars+=2;
        printf("\n");
    }
return 0;
}