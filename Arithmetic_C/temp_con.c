#include<stdio.h>
int main()
{
    float feh,cel=3;
    printf("Enter the temp in Celcius: ");
    scanf("%f",&cel);
    feh=((9.00/5.00)*cel)+32;
    printf("%f cel = %f feh\n",cel,feh);
    return 0;
}