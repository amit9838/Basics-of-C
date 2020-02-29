#include<stdio.h>
main()
{
    int i=2;
    switch(i)
    {
        case 1:
        printf("This is case 1.\n");

        case 2:
        printf("This is case 2.\n");

        case 3:
        printf("This is case 3.\n");

        default:
        printf("This is Default\n");

    }
return 0;
}
/*All the cases after case 2 are execuetd in switch statement whether the case numer is passed or not.
but if we use 'break' then further execution can be stopped. */