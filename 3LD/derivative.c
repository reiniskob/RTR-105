#include<stdio.h>
#include <math.h>

double first_derivative(double, double);
double second_derivative(double, double);

void main()
{

        double a, b, x, p, delta_x; //float y:
	char *filename = "derivative.dat";

    	FILE *fp;
	fp = fopen("derivative.dat", "w");
    	if (fp == NULL)
    	{
        	printf("Error opening the file %s", filename);
        	//return -1;
	}
	printf("Derivative of sinh(x/2)\n");
        printf("Enter range [a;b] and required precision 10^-p\n");
        printf("a=");
        scanf("%lf", &a);
        printf("b=");
        scanf("%lf", &b);
        printf("p=");
        scanf("%lf", &p);

        delta_x = 1*pow(10,-p);
        x = a;

        fprintf(fp, "x\t|sinh(x/2)\t|(cosh(x/2))/2\t|(sinh(x/2))'\t|(sinh(x/2))/4\t|(sinh(x/2))''\n");
        fprintf(fp, "__________________________________________________________________________________\n");

        while(x<=b) //y = sin(x);
        {
        fprintf(fp, "%5.2f \t| %5.2f \t| %5.2f \t| %5.2f \t| " ,x, sinh(x/2), (cosh(x/2))/2, first_derivative(x, delta_x));
        fprintf(fp, "%5.2f     \t| %5.2f\n", (sinh(x/2))/4, second_derivative(x, delta_x));
        x = x + delta_x;
	}


	fclose(fp);
}


double first_derivative(double x, double delta_x)
{
return (sinh((x+delta_x)/2)-sinh(x/2))/delta_x;
}

double second_derivative(double x, double delta_x)
{
return (sinh((x+2*delta_x)/2)-(2*sinh((x+delta_x)/2))+sinh(x/2))/(delta_x*delta_x);
}

