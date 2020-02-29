#include<stdio.h>
#include<math.h>
int main()
{   
    int t;
    float x,i,m,sum,tot;
    
    // for(i=2;i<=7;i++)
    {   x=9;
        i=1;
        m = ((x-1)/x);
        // printf("%f",m);
        for(i=0;i<=7;i++)
        {
        for(t=1;t<i;t++)
            m*=m;
            printf("\n%f",m);
            sum = m;
            sum+=sum;
            printf("\n,,,,,%f",sum);
        }
        printf("\n::%f",m);
    // printf("sum of series: = %f\n",sum);
    }
    // tot = sum + ((x-1)/x);
    // printf("sum of series = %f\n",tot);
return 0;
}