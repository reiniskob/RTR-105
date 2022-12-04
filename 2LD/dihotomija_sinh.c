//https://estudijas.rtu.lv/file.php/252149/RTR105_2019_2020_L18_20200118_14_50.pdf
//https://www.programmingsimplified.com/c/dos.h/delay
//https://stackoverflow.com/questions/25609437/print-number-of-spaces-using-printf-in-c°
//https://superuser.com/questions/148701/specifically-marking-a-point-in-gnuplot

#include<stdio.h>
#include<math.h>

double mod_sinh(double, double);
int main()
{
        double a, a1, b, b1, c, x, delta_x, funkcija_a, funkcija_b, funkcija_x;
        int k=0, g, p;

	printf("Function sinh(x)=c root finder in interval [a;b], precision (below 15) 10^-p\n");
	printf("Enter interval a and b:\na=");
	scanf("%lf", &a);
	printf("b=");
	scanf("%lf", &b);
	printf("c=");
	scanf("%lf", &c);
	printf("precision=");
	scanf("%d", &p);

	delta_x = 1*pow(10,-p-1);

        funkcija_a = mod_sinh(a,c);
        funkcija_b = mod_sinh(b,c);

        if(funkcija_a*funkcija_b>0)
        {
                printf("In the interval [%lf;%lf] sinh(x)-%lf ",a,b,c);
                printf("there are no roots or there are is an even number of roots\n");
                return 1;
        }

	//printf("sinh(%f)-%f=%f\t\t\t\t", a, c, mod_sinh(a,c));
	//printf("sinh(%f)-%f=%f \n", b, c, mod_sinh(b,c));
        //while((mod_sinh(b,c)/mod_sinh(b,c))/pow(10,-p+1)>delta_x)

        a1=a;
	b1=b;
	while((b1-a1)>delta_x)
        {
        	k++;
        	x = (a1+b1)/2;
		if (funkcija_a*mod_sinh(x,c)>0)
		a1 = x;				//pie a=0 -> funkcija_a=0 -> reizinaajums ir precizi 0
		else
		b1 = x;				//visu laiku -> visu laiku "strada" b=x
		//printf("%2d.Iteracija: sinh(%.10f)=%.10f\t", k, a, mod_sinh(a,c));
		//printf("\t\t\t\t\t      sinh(%.30f)=%.10f\t\n", x, mod_sinh(x,c));
	        //printf("sinh(%.10f)=%.10f\n", b, mod_sinh(b,c));
		//for(g=1 ; g<=10000000 ; g++){}
        }
        printf("Root in the interval [%f;%f] is near x=%10.15lf, because sinh(x)-%.4lf=%.10lf\n", a, b, x, c,  mod_sinh(x,c));
	printf("Precise until this mark\t\t\t\t    %*c^\n", p, ' ');
	printf("%d iterations needed to get 10^-%d precision\n", k-1,p);

return 0;
}

double mod_sinh(double x, double c)
{
        return sinh(x/2)-c;
}
