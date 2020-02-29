#include<stdio.h>
main()
{
int a,b,c;
printf("Enter the values of a,b,c: ");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
    if(a>c)
        printf("%d is Greatest.\n",a);
    else
    {
        printf("%d is Greatest.\n",c);

    }
else
    if(b>c)
        printf("%d is Greatest,\n",b);
    else
    {
        printf("%d is Greatest.\n",c);
    }

return 0;
}