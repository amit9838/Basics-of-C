#include<stdio.h>
main()
{
    char i,j;
    for(i='E';i>='A';i--)
    {
        printf("\n");
        for(j=0;j<6;j++)
        printf("%c",i);
    }
    return 0;
}