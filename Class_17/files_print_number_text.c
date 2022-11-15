
#include <stdio.h>
int main(void)
{
        FILE *fp;
        fp = fopen("./teksts.dat", "wt");
	char a[];

        if( fp == NULL )
        {
        printf("Failu nav izdevies atvert.\n");
        return 100;
        }

	double d[] = {2.54517, 7.36544, 5.12366};
	fprntf(fp,"%lf\n%lf\n%lf\n", d[0],d[1],d[2])
	rewind(fp);
	fscanf(fp,"%lf%lf%lf",d[0],d[1],d[2])
        fclose(fp);

	printf("0 = %lf, 1 = %lf,2 = %lf (after fscanf)\n",d[0],d[1],d[2]);

return 0;
}


