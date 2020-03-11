#include<stdio.h>
int main()
{
    int i,sum,avg;
    int marks[5];
    for(i=0;i<=4;i++)
        {
        printf("Enter marks[%d]: ",i+1);
        scanf("%d",&marks[i]);
        }
    for(i=0;i<=4;i++)
        sum=sum+marks[i];
    printf("Total marks: %d\n",sum);
    avg=sum/5;
    printf("Avg. marks: %d\n",avg);
}