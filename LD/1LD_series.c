//https://estudijas.rtu.lv/file.php/252149/RTR105_2019_2020_L17_20200118_14_49.pdf
//https://www.youtube.com/watch?v=3d6DsjIBzJ4&ab_channel=3Blue1Brown
//https://planetmath.org/taylorseriesofhyperbolicfunctions
//https://www.geeksforgeeks.org/how-to-return-multiple-values-from-a-function-in-c-or-cpp/
//gcc complile key -lm
#include<stdio.h>
#include<math.h>
void my_sinh(double, int, double*, double*);
void main( )
{

        double x, y, my, my_1;
	int k=10;
	printf("sinh(x/2) calculation");
	printf("\nenter argument x:");
	scanf(" %lf", &x);

        y = sinh(x/2);
	//x pieder R
	printf("\nstandarta funkcijay sinh(%.2f/2)=%.5f\n",x,y);

	my_sinh(x, k, &my, &my_1);
	printf("my_sinh(%.2f/2)=%.5f\n",x ,my);
	printf("a%d = my_sinh(%.2f/2)=%.5f\n",k-1 ,x ,my_1);
	printf("a%d = my_sinh(%.2f/2)=%.5f\n",k , x, my);

	printf("							\n");
	printf("		%d					\n", k);
	printf("		___					\n");
	printf("	       \\	x^(2k+1)			\n");
	printf("sinh(%.2f/2) = 	>   ________________			\n", x);
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

void my_sinh(double x, int i, double* my, double* my_1)
{
	double a, s;
	int n = 0;
        a = x/(2*1);//n=1  x^n/(2^n*n!)
        s = a ;

        while(n<i)
        {
            n++;
            a = a * ((x*x)/((4*2*n)*(2*n+1)));
            s = s + a ;
        }
	*my = s;
	*my_1 = s - a;
}
