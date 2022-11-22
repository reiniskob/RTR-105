// a1, a2, a3 -> a
#include<stdio.h>
#include<math.h>
void main( ) 
{
double x =2.05,y,a,s;
y = sin(x) ;
printf("y=sin(%.2f)=%.2f\n", x , y );
a = pow(-1,0)*pow(x,2*0+1)/(1.);
s = a ;
printf("%.2f\t%8.2f\t%8.2f\n", x , a , s ); 

a = a * (-1)*x*x /(2*3);
s = s + a ;
printf("%.2f\t%8.2f\t%8.2f\n", x , a , s ) ;

a = a * (-1)*x*x /(4*5);
s = s + a ;
printf("%.2f\t%8.2f\t%8.2f\n", x , a , s ) ;

a = a * (-1)*x*x /(6*7);
s = s + a ;
printf("%.2f\t%8.2f\t%8.2f\n",x , a , s ) ;
}

