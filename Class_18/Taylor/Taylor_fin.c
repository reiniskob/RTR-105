#include<stdio.h>
#include<math.h>
double mans_sinuss(double x)
{
	double a, s;
	int k=0;

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
return s;
}

void main( ) 
{
        double x =2.05,y,yy;
        y = sin(x) ;

	printf("standartafunkcija-sin-y=sin(%.2f)=%.2f\n",x,y) ;

	yy = mans_sinuss ( x ) ;
	printf("lietotaja funkcija-y=mans_sinuss(%.2f)=%.2f\n" , x , yy ) ;
}


