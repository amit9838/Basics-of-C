#include<stdio.h>
int main()
{
    int arr[] = {10,20,30,40,50,60};
    int i=5,*j,*k,*x,*y;
    j=&i;
    printf("Old value of j= %d\n",j);
    j=j+9;
    printf("New value of j = %d\n",j); //Prints new location = original location + 36 bytes(9*4) 
    k=&i;
    printf("Old value of k= %d\n",k);
    k=k-3;
    printf("New value of k= %d\n",k);  //Prints new location = original location - 12 bytes(3*4)
    x=&arr[1];
    printf("Location of 10 in the memory: %d\n",x);
    y=&arr[5];
    printf("Location of 20 in the memory: %d\n",y);
    // printf("x=%d,y=%d\n",x,y);
    printf("%d\n",y-x); //y-x 16 bytes difference means 16/4 = 4 (int type value).
    j=&arr[4];
    printf("Location of 50(4th element) in the memory: %d\n",j);
    k = (arr+4);
    if(j==k)
        printf("The two pointers point the same location.\n");
    else
        printf("The two pointers point the different location.\n");
    return 0;
}