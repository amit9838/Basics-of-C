//Passing array elements to a function
#include<stdio.h>
void pass_element(int);
void pass_address(int *);
int main()
{
    int i;
    int marks[] = {69,99,23,12,56};
    for(i=0;i<=4;i++)
        pass_element(marks[i]);
    for(i=0;i<=4;i++)
        pass_address(&marks[i]);
    return 0;
}
void pass_element(int m)
{
    printf("By elenent:%d\n",m);
}
void pass_address(int *n)
{
    printf("By address: %d\n",*n);
}