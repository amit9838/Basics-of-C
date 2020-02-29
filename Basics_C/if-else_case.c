#include <stdio.h>
int main()
{
    int a;
    printf("enter the year to check leap year\n");
    scanf("%d",&a);
    if (a%4==0&&a%100!=0)

    {
        printf("year is leap yeaer");
    }
    else if(a%400==0)
        printf("leap year");

    else
    {
        printf("the year is not leap");
    }
    
    return 0;


}