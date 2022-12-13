#include<stdio.h>
#include <math.h>

void main()
{

        long double a, b, x, p, delta_x; //float y:
	char *filename = "derivative.txt";

    	FILE *fp;
	fp = fopen("derivative.txt", "w");
    	if (fp == NULL)
    	{
        	printf("Error opening the file %s", filename);
        	return -1;
	}
	printf("Derivative of sinh(x/2)\n");
        /*printf("Enter range [a;b] and required precision 10^-p\n");
        printf("a=");
        scanf("%Lf", &a);
        printf("b=");
        scanf("%Lf", &b);
        printf("p=");
        scanf("%Lf", &p);
        */

        a = -10;
        b = 10;
        p = 0;

        delta_x = 1*pow(10,-p);
        x = a;


        printf("tx\t\tsinh(x/2)\tderivative sinh(x/2)\n");

        while(x<=b) //y = sin(x);
        {
        //printf("%10.2Lf\t%10.2f\t% 10.2Lf\n",x, sinh(x/2), (sinh((x+delta_x)/2)-sinh(x/2))/delta_x);
        fprintf(fp, "%5.2Lf\t\t%5.2f\t\t% 5.2Lf\n" ,x, sinh(x/2), (sinh((x+delta_x)/2)-sinh(x/2))/delta_x);
        x = x + delta_x;
	}

	fclose(fp);
}

