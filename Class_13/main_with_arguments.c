
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	printf("You have entered %d arguments: \n",argc);

	for(int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		if(i>0)
		{
			//argv[i]*argv[i] // nevar sereizinat ciparus
			printf("%d * %d = %d\n",atoi(argv[i]), atoi(argv[i]), atoi(argv[i])*atoi(argv[i]));
		}
	}

   return 0;
}

