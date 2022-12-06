//https://estudijas.rtu.lv/file.php/252149/RTR105_2019_2020_L17_20200118_14_49.pdf
//https://www.youtube.com/watch?v=3d6DsjIBzJ4&ab_channel=3Blue1Brown
//https://planetmath.org/taylorseriesofhyperbolicfunctions
//https://www.geeksforgeeks.org/how-to-return-multiple-values-from-a-function-in-c-or-cpp/
//gcc complile key -lm
#include<stdio.h>
#include<math.h>
void my_sinh(double, int, double*, long double*, long double*);
void main( )
{

        double x, y, my;
	long double aE499 = 1.L, aE500 = 1.L;
	int k=500;
	printf("sinh(x/2) calculation");
	printf("\nenter argument x:");
	scanf(" %lf", &x);

        y = sinh(x/2);
	//x pieder R
	printf("\nstandarta funkcijay sinh(%f/2)=%f\n",x,y);

	my_sinh(x, k, &my, &aE499, &aE500);
	printf("mana funkcija  my_sinh(%f/2) = %f\n",x ,my);
	//printf("a%d = 10^%Lf\n", k-1, aE499);//double garums ir 1.7+/1E308 un teilora 500 kartas
	//printf("a%d = 10^%Lf\n", k, aE500);//skaitlis ir daudz mazaks par to tapec ievadot skaitli paradas "-inf"
	//samazinot atkartosanas reizes uz apmeram 100 paradas, ka a100~10^-297
	printf("a%d = %Le\n", k-1, aE499);
	printf("a%d = %Le\n", k-1, aE499);



	printf("							\n");
	printf("		%d					\n", k);
	printf("		___					\n");
	printf("	       \\	x^(2k+1)			\n");
	printf("sinh(%.2f/2) = >   ________________			\n", x);
	printf("	       /___					\n");
	printf("	       k=0  2^(2k+1)*(2k+1)!			\n");
	printf("							\n");
	printf("							\n");
	printf("			    x^2				\n");
	printf("rekurences reizinatajs = __________			\n");
	printf("							\n");
	printf("			4(2n)(2n+1)			\n");
	printf("							\n");

}

void my_sinh(double x, int i, double* my, long double* aE499, long double* aE500)
{
	long double a = 1.L , s = 0.0, a_1= 1.L;
	long double a499 = 1.L, a500 = 1.L;
	int n=0;
        a = x/(2.0*1.0);//n=1  x^n/(2.0^n*n!)
        s = a ;

        while(n<i)
        {
            n++;
            a = a * ((x*x)/((4.0*2.0*n)*(2.0*n+1.0)));
            s = s + a ;
        }
	a_1 = a/((x*x)/((4.0*2.0*n)*(2.0*n+1.0)));
	*aE499 = a_1;
	*aE500 = a;
	//*aE499 = log10(a_1);
	//*aE500 = log10(a);

	*my = s;
}
