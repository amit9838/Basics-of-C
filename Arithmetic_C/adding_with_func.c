#include<stdio.h>
main()
{
    add();
}
add()
{
    int a,b, c;
    printf("Enter value of a:  ");
    scanf("%d",&a);
    printf("Enter the value of b:  ");
    scanf("%d",&b);
    c=a+b;
    printf("the sum of a and  b is: %d\n",c);
    printf("Address of a: %u\n",&a);
    printf("Address of b: %u\n",&b);
return 0;
}