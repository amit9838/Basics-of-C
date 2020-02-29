//We can put variable as argument to decide length of required size

#include<stdio.h>
int main()
{
    int max,i,mark,tot=0;
    float avg;
    printf("Number of students in class: ");
    scanf("%d",&max);
    int marks[max];  //Defining array length
    for(i=1;i<=max;i++)
        {
        printf("\nMark of std %d: ",i);
        scanf("%d",&mark);
        tot+=mark;
        }
    avg=(float)tot/(float)max;     //converting int value to float
    printf("Average marks of %d students = %.2f\n",max,avg);  // .2 in between % and f defines number of digits after decimal.
    return 0; 
}
