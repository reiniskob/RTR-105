//pievienoju ari desmos aprekinu, jo tas deva lielaku precizitati
//trapeces un Simpsona kodi ir pasa rakstiti, tapec tie ir mazliet leni pie lielakam precizitatem
#include<stdio.h>
#include<math.h>

void main()
{
	long double a, b, p, eps = 0, h, integral1=0., integral2 = 1.L, delta_x, delta_x1=0;
	int k, n=1, i;

	printf("Integral of sinh(x/2)\n");
	printf("Enter lower limit a, upper limit b and required precision 10^-p\n");
	printf("a=");
	scanf("%Lf", &a);
	printf("b=");
	scanf("%Lf", &b);
	printf("p=");
	scanf("%Lf", &p);

	eps=1*pow(10,-p);

	//rectangle rule
	integral2=(b-a)*(sinh(a/2)+sinh(b/2));	//(b-a)/2.*sin(a)+(b-a)/2.*sin(b);
	while (fabs (integral2-integral1)>eps)
	{
		n*=2;
		h=(b-a)/n;
		integral1=integral2;
		integral2=0.;
		for (k=0;k<n; k++)
			integral2+=h*sinh((a+(k+0.5)*h)/2);
	}
	printf("\nIntegral using rectangular rule in interval [%.2Lf;%.2Lf]= %.10Lf\n", a, b, integral2);


	//trapazoidal rule
	n=1;
	integral1=0;
	integral2=1;

	integral2=(b-a)*(sinh(a/2)+sinh(b/2));	//(b-a)/2.*sin(a)+(b-a)/2.*sin(b);
	while (fabs (integral2-integral1)>eps)
	{
		n*=3;
		delta_x=(b-a)/n;

		integral1=integral2;
		integral2=0;
		delta_x1=0;
		integral2=(delta_x/3)*(sinh(a/2)+sinh(b/2));
		for (k=1;a<=b-delta_x1;k++)
		{
			delta_x1=delta_x*k;
			integral2+=(delta_x/2)*(2)*sinh((b-delta_x1)/2);
		}

	}
	printf("Integral using trapezoidal rule in interval [%.2Lf;%.2Lf]= %.10Lf\n", a, b, integral2);


	//simpsons rule
	n=1;
	integral1=0;
	integral2=1;

	while (fabs (integral2-integral1)>eps)
	{
		n*=3;
		delta_x=(b-a)/n;

		integral1=integral2;
		integral2=0;
		delta_x1=0;
		integral2=(delta_x/3)*(sinh(a/2)+sinh(b/2));
		for (k=1;a<=b-delta_x1;k++)
		{
			delta_x1=delta_x*k;
			integral2+=(delta_x/3)*(4/(sqrt(2)*pow(sqrt(2),cos(k*M_PI))))*sinh((b-delta_x1)/2);
			//printf("%Lf \t %Lf \t %f \n",integral2, delta_x1, cos(k*M_PI));
		}
	}
	printf("Integral using Simpson's rule in interval   [%.2Lf;%.2Lf]= %.10Lf\n", a, b, integral2);



}
