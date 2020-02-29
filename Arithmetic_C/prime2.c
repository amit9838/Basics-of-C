#include <stdio.h>
int main()
{
    int n,c=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=2;i<n/2;i++)  //Dividing by 2 reduces execution time.
    {
        if(n%i==0)
        {
         c=1;
            break;
        }
    }
    if(c==0)
    {
        printf("It is prime\n\n");
    }
    else
    {
        printf("It is not prime\n\n");
    }
    return 0;
}