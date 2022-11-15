#include <stdio.h>
int main()
{
        int i, N, n, x;
        char teikums[N];
        printf("Enter a sentence:");
	fgets(teikums, N, stdin);
//	gets(teikums);
	printf("You entered: %s", teikums);

	for(i=97;i<123;i++)//iet caur alfabetam
	{
		x = 0;
		for(n=0;n<N;n++)// iet cauri tekstam
		{
			if(teikums[n]==i)
			{
				x++;
			}
		}
		char c = i;
		printf("\n%c repetes %d",c , x );
	}
	printf("\n");

return 0;
}

