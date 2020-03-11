/**********************************************************************
Shifting the elements of an array in the direction by one element.
***********************************************************************/

#include<stdio.h>
int main()
{
    int x,i,n,temp;
    int arr1[n];
//Enter array length
printf("Enter the length of the array: ");
scanf("%d",&n);
//Taking array input.
for(i=0;i<n;i++)
    {
    printf("Enter the Elements: ");
    scanf("%d",&arr1[i]);
    }
//Printing the array.
for(i=0;i<n;i++)
{
    printf("%d ",arr1[i]);
}
printf("\n");

//Shifting the array to the right.
temp=arr1[n-1];
for(i=n-1;i>0;i--)
{
arr1[i]=arr1[i-1];
}
arr1[0]=temp;

//Printing new array. 
for(i=0;i<n;i++)
{
    printf("%d ",arr1[i]);
}
printf("\n\n");
return 0;
}