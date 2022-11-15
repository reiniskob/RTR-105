#include <stdio.h>
int main(void)
{
	FILE *fp;
	fp = fopen("./teksts.dat", "wt"); //("kur","ko")
	//kur(var noradit ceļu) un ko(faila nosaukums)

	if( fp == NULL )
	{
	printf("Failu nav izdevies atvert.\n");
	return 100;
	}

	fprintf(fp,"Izvads failā\n");
	fprintf(fp,"Fails ir atvērts. Šis ir otrais ieraksts failā\n");
	double d = 1.81424679;
	fprintf(fp,"d vertiba = %.3lf\n",d);

	fclose(fp);//ja ir veiksmigs fopen vajag ari fclose

return 0;
}

