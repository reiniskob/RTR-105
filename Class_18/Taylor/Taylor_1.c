#include<stdio.h>
#include<math.h>
void main( ) 
{
double x =2.05 , y , a0 , a1 , a2 , a3 , s0 , s1 , s2 , s3 ;
y = sin(x) ;
printf("y=sin(%.2f)=%.2f\n", x , y ) ;
a0 = pow(-1,0)*pow(x,2*0+1)/(1.) ;
s0 = a0 ;
printf("%.2f\t%8.2f\t%8.2f\n", x , a0 , s0 ) ;

a1 = pow(-1,1)*pow(x,2*1+1)/(1.*1*2*3 ) ;
s1 = a0 + a1 ;
printf("%.2f\t%8.2f\t%8.2f\n", x , a1 , s1 ) ;

a2 = pow(-1,2)*pow(x,2*2+1)/(1.*1*2*3*4*5) ;
s2 = a0 + a1 + a2 ;
printf("%.2f\t%8.2f\t%8.2f\n", x , a2 , s2 ) ;

a3 = pow(-1,3)*pow(x,2*3+1)/(1.*1*2*3*4*5*6*7) ;
s3 = a0 + a1 + a2 + a3 ;
printf("%.2f\t%8.2f\t%8.2f\n",x , a3 , s3 ) ;
}
