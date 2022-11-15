#include <stdio.h>
int main()
{
        int i, N, n, x = 0;
        char teikums[N];
        printf("Enter a sentence:");
	teikums[0] = '\0';
	fgets(teikums, sizeof(teikums)/sizeof(char), stdin);
	printf("You entered: %s", teikums);


	for(i=97;i<(97+26);i++)//iet caur mazo burtu alfabetam
	{
		x = 0;
		for(n=0;n<(sizeof(teikums)/sizeof(char));n++)// iet cauri tekstam
		{
			if(teikums[n] == i)
			{
				x++;
			}
		}
		printf("\n%c repetes %d",i , x );
	}
	printf("\n");


return 0;
}

