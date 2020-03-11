#include<stdio.h>
int main()
{
    int x,i,n,pos=0,zero=0,neg=0,ev=0,odd=0;
    
// //Enter array length
printf("Enter the length of the array: ");
scanf("%d",&n);
int arr1[n];
//Taking array input.
for(i=0;i<n;i++)
    {
    printf("Element %d: ",i+1);
    scanf("%d",&arr1[i]);
    }
//Printing the array.
printf("\nArray: ");
for(i=0;i<n;i++)
{
    printf("%d ",arr1[i]);
}
printf("\n\n");
//Positive numbers.
for(i=0;i<n;i++)
{
    if ((arr1[i])>0)
    {
        pos++;
    }
    else if(arr1[i]==0)
    {
        zero++;
    }
    else
    {
        neg++;
    }
}
for(i=0;i<n;i++)
{
    if ((arr1[i])%2==0)
    {
        ev++;
    }
    else
    {
        odd++;
    }
}
printf("Positives: %d\n",pos);
printf("Zeros:     %d\n",zero);
printf("Negatives: %d\n",neg);
printf("Evens:     %d\n",ev);
printf("Odds:      %d\n",odd);
return 0;
}