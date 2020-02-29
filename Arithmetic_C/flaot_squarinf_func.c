#include<stdio.h>

main( )
{
float a, b ;
printf ( "\nEnter any number " ) ;
scanf ( "%f", &a ) ;
b = a*a ;
printf ( "\nSquare of %f is %f", a, b ) ;
}
square ( float x )
{
float y ;
y = x * x ;
return ( y ) ;
}