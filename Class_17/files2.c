
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

	while( (a=fgetc(fp)) != EOF)
	putc(a, stdout);//print char

        fclose(fp);

return 0;
}


