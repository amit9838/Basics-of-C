//#######################################################
//Program to convert numerical value to Roman number,
//#######################################################

#include<stdio.h>
// romanise();
int main()
{
    int yr;
    printf("Enter Year: ");
    scanf("%d",&yr);

    yr = romanise(yr,1000,'m');
    yr = romanise(yr,500,'d');
    yr = romanise(yr,100,'c');
    yr = romanise(yr,50,'l');
    yr = romanise(yr,10,'x');
    yr = romanise(yr,5,'v');
    yr = romanise(yr,1,'i');

    printf("\n\nPress any key to exit...");
    getchar();
}
romanise(int y,int k,char ch)
{
    int i,j;

    if(y==9)
    {
        printf("ix");
        return(y%9);
    }
    
    if(y==4)
    {
        printf("iv");
        return(y%4);
    }

    j=y/k;

    for(i=1;i<=j;i++)
        printf("%c",ch);
    return(y-k*j);
}