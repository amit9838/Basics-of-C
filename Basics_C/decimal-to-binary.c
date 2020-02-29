#include<stdio.h>
int main()
{
    int a,x=3;
    fun2(x);
    return 0;
}
#define LIMIT 1000 
void fun2(int n) 
{ 
if (n <= 0) 
	return; 
if (n > LIMIT) 
	return; 
printf("%d ", n); 
fun2(2*n); 
printf("%d ", n); 
} 
