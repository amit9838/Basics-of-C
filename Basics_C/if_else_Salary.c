#include<stdio.h>
main()
{
 char g;
 int yos,qual,sal;

 printf("Enter Gender: ");
  scanf("%c",&g);
 printf("Qualifications: ");
  scanf("%d",&qual);
 printf("Yers of services: ");
  scanf("%d",&yos);

 if(g=='m'&&yos>=10&&qual==1)
    sal=15000;
 else if((g=='m'&&yos>=10&qual==0)||
 (g=='m'&&yos<10&&qual==1)||
 (g=="f"&&yos<10&&qual==1))
    sal=10000;
 else if(g=='m'&&yos<10&&qual==0)
    sal=7000;
 else if(g=='f'&&yos>=10&&qual==1)
    sal=12000;
else if(g=='f'&&yos>=10&&qual==0)
    sal=9000;
else
    sal=6000;
printf("Your salary is = %d",sal);
 }