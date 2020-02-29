#include<stdio.h>
main()
{
   
    printf("I,m in main before calling function.\n"); 
    message();
    printf("I,m in main after calling function.\n");
}
    
message()
{
    printf("I am  in msg function.\n");
return 0;
}


