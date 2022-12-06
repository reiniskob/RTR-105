#include<stdio.h>
#include <math.h>

void main()
{
	long double a, b, p, eps = 0, h, integral1=0., integral2 = 1.L;
	int k, n=10;

	printf("Integral of sinh(x/2)\n");
	printf("Enter lower limit a, upper limit b and required precision p\n");
	printf("a=");
	scanf("%Lf", &a);
	printf("b=");
	scanf("%Lf", &b);
	printf("p=");
	scanf("%Lf", &p);

	eps=1*pow(10,-p);

	integral2=(b-a)*(sinh(a/2)+sinh(b/2))/n;	//(b-a)/2.*sin(a)+(b-a)/2.*sin(b); 
	while (fabs (integral2-integral1)>eps)
	{
		n*=2;
		h=(b-a)/n;
		integral1=integral2;
		integral2=0.;
		for (k=0;k<n; k++)
			integral2+=h*sinh((a+(k+0.5)*h)/2);
	}
	printf("/nIntegral in interval [%.2Lf;%.2Lf]= %1.10Lf\n", a, b, integral2);
}
