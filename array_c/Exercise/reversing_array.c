/*****************************************************
            Reversing an Array
 * **************************************************/
#include<stdio.h>
int main()
{
    int i,a,b,c;
    int arr2[5],arr1[]={2,4,2,5,7};
     for(i=0;i<5;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("---> Original array. ");
    printf("\n\n");
    for(i=5;i>0;i--)
    {
        arr2[5-i]=arr1[i-1];
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("---> Reverse of First array. ");
    printf("\n\n");
return 0;
}