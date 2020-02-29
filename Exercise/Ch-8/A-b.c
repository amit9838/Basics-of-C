#include<stdio.h>
int check (int);
main()
{
    int i = 44,c;
    c = check(i);
    printf("%d\n",c);
    return 0;
}
int check(int x)
{
    if(x>=45)
        return(100);
    else
        return(10*10);
    
}