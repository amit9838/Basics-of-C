//Adding More than two numbres using loop
#include<stdio.h>
int main()
{
    int a,b,c;
    char op;
    printf("Enter the operator: ");
    scanf("%c",&op);
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    switch (op)
    {
    case '+':
        c=a+b;
        break;
    case '-':
        c=a-b;
        break;

    case '*':
        c=a*b;
        break;

    case '/':
        c=a/b;
        break;
    
    default:
        break;
    }
    printf("%d%c%d=%d",a,op,b,c);
return;
}