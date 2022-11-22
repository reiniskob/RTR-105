#include<stdio.h>
#include<math.h>
void main( ) 
{
	double x =2.05,y,a,s;
	int k=0;
	y = sin(x) ;
	printf("y=sin(%.2f)=%.2f\n", x , y );

	a = pow(-1,k)*pow(x,2*k+1)/(1.);
	s = a ;
	printf("%.2f\t%8.2f\t%8.2f\n", x , a , s ); 

	while(k<3)
	{
		k++;
		a = a * (-1)*x*x /((2*k)*(2*k+1));
		s = s + a ;
		printf("%.2f\t%8.2f\t%8.2f\n", x , a , s ) ;
	}
}

