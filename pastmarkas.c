#include <stdio.h>

int main()
{
	int n, i, n1, dal, atl1, atl2, atl3, n3;

	printf("Finding the amount of 5 and 3 so that they add up to the\n entered number, so that 5 are used the most\n");
	printf("Enter a number:");
	scanf(" %d",&n);
	int x = 0;
	for(i = 0 ;x == 0;i++)
	{
		n1 = n - 5*i;
		dal = n1 / 5;
		atl1 = n1 % 5;
		printf("dal=%d, atl=%d\n",dal , atl1);
		if(atl1 == 0)
		{
			x = 1;
			printf("5*%d, 3*%d\n", dal+i*5, atl1);
		}
		else
		{
			if(atl1 == 3)
			{
				x = 1;
				n1 = atl1 / 3 + i*3;
				printf("5*%d, 3*%d\n", dal+i*5 , n1);
			}
		}
	}


   return 0;
}

