#include<stdio.h>
int main()
{
    int n,i,count=0;
    int arr[]= {3,9,8,3,9,2,9};

    printf("Enter the no. to Find: ");
    scanf("%d",&n);
    
    for(i=0;i<7;i++)
    {
        if(arr[i]==n)
        {   
            // printf("%d  ",i+1);
            count++;
        }
    }
       
    if(count!=0)
        {
            printf("\nMatching found = %d\n",count);
        }
    else
        {
            printf("\n________No Record found!________\n\n");
        }
printf("Positions: ");
for(i=0;i<7;i++)
    {
        if(arr[i]==n)
        {   
            printf("%d  ",i+1);
        }
    }
printf("\n\n");
return 0;
}