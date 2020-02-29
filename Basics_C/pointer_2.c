#include<stdio.h>
int main()
{
    int i = 3;
    int *j; //Assigning a pointer variable,
    j = &i;   //Assigning the address of i to j.
    printf("Address of i = %u\n",&i);
    printf("Address of i = %u\n",j);
    printf("Address of j = %u\n",&j);
    printf("Value of j(unsigned) = %u\n",j);
    printf("Value of j(signed) = %d\n",j);
    printf("Value of i = %d\n",i);
    printf("Value of i = %d\n",*(&i));
    printf("Value of i = %d\n",*j);
    return 0;
}
//Value of j = address of i
// %u is unsigned operator.
// '*' means value at address.
