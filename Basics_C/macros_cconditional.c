// Conditional Compilation

#include<stdio.h>
// #define MACRONAME 1
int main()
{
    #ifdef MACRONAME
        printf("Macroname is defined.\n\n");
        printf("     (-_-)\n\n");
    #else
    {
        printf("Output from else.\n");
    }
    

    #endif

    #ifndef MACRONAME
    printf("Macroname is not defined !\n\n");
    printf("     [-_-]\n\n");
    #endif
    printf("Common Statement\n");
    
    return 0;
}