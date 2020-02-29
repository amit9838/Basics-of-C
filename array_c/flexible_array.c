//Defining array length

#include<stdio.h>
int main()
{
    int max,i,mark,tot=0;
    float avg;
    printf("Number of students in class: ");
    scanf("%d",&max);
    int marks[max];
    for(i=1;i<=max;i++)
        {
        printf("\nMark of std %d: ",i);
        scanf("%d",&mark);
        tot+=mark;
        }
    avg=(float)tot/(float)max;
    printf("Average marks of %d students = %.2f\n",max,avg);
    return 0; 
}
