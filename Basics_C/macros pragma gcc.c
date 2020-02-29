#include<stdio.h>
void fun1();
void fun2();
void __attribute__((constructor)) fun1();
void __attribute__((constructor)) fun2();
#pragma startup fun1
#pragma exit fun2
int main()
{
    printf("Inside main\n");
    return 0;
}
void fun1()
{
    printf("Inside function 1 \n");
}
void fun2()
{
    printf("Inside function2 \n");
}