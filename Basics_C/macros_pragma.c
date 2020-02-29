//#pragma startup and pragma exit: These directives allow us to specify functions that are called upon program startup(Before main()) or progroam exit(Just before program terminates).
#include<stdio.h>
void fun1();
void fun2();
#pragma startup fun1
#pragma exit fun2
int main()
{
    printf("Inside main\n");
    return 0;
}
void fun1()
{
    printf("Inside function 1");
}
void fun2()
{
    printf("Inside function2 ");
}

//Output should be:
//Inside function 1
//Inside main
//Inside function 2

// GCC will not generate this output because gcc dosen't support pragma startup and pragma exit.
//Method 2 will work in gcc.  file_name-macros pragma gcc.c