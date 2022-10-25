#include <stdio.h>
int main()
{
	int n, test;
	char t;
	printf("Enter a whole decimal number:");
	scanf(" %d",&n);    //pajauta faktoriala decimālo skaitli
	printf("Choose a data type: \nFor char enter \"c\" \nFor int enter\"i\" \nFor long long int enter \"l\"\nc,i,l:");
	scanf(" %c",&t);    //pajauta faktoriala decimālo skaitli
	if(t == 99)
	{
		printf("Char:\n");
		char fact = 1;
		int x = 0;
//		long long int fact_check;
//		while(fact == fact_check)
//		{
			for(;x < n;)
			{
				x = x + 1;
				fact = fact * x;
				printf("%d!=%d\n", x, fact);
			}
//		}
	}
	else
	{
		printf("Bad data type");
	}
   return 0;
}

