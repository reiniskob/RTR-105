#include <stdio.h>
int main()
{
        int n, test;
        char t;
        printf("Enter a whole decimal number:");
        scanf(" %d",&n);    //pajauta faktoriala decimālo skaitli
        printf("Choose a data type: \nFor char enter \"c\" \nFor int enter \"i\" \nFor long long int enter \"l\"\nc,i,l:");
        scanf(" %c",&t);    //pajauta faktoriala decimālo skaitli
        if(t == 99)
        {
                printf("Char %d!: ", n);
                char fact = 1, fact_previous = 1, fact_next = 1;
                int x;
                        for(x = 1 ; x-1 <= n ; x++)
                        {
                                if(fact_previous == fact_next ) //parbauda ieprieksejo ar nakamo dalits ar x
                                {
                                        fact_previous = fact;
                                        fact = fact * x;
                                        fact_next = fact / x;
                                }
                                else
                                {
                                        x = n+3;                // partrauc loop ja fact_previous nav vienads ar fact_next
                                        printf("can't dispaly choosen factorial \nclosest displayable factorial: ");
                                }
                        }
                if(x != n+3)            //ja faktorials ir iespejams parada ieprieksejo iespejamo faktorialu
		{
                        printf("%d\n", fact_previous);
                }
        }
        else
        {
		if(t == 105)
		{
		        printf("Int %d!: ", n);
		        int fact = 1, fact_previous = 1, fact_next = 1;
		        int x;
		                for(x = 1 ; x-1 <= n ; x++)
		                {
		                        if(fact_previous == fact_next ) //parbauda ieprieksejo ar nakamo dalits ar x
		                        {
		                                fact_previous = fact;
		                                fact = fact * x;
		                                fact_next = fact / x;
		                        }
		                        else
		                        {
		                                x = n+3;                // partrauc loop ja fact_previous nav vienads ar fact_next
		                                printf("can't dispaly choosen factorial \nclosest displayable factorial: ");
		                        }
		                }
		        if(x != n+3)            //ja faktorials ir iespejams parada ieprieksejo iespejamo faktorialu
		        {
		                printf("%d\n", fact_previous);
		        }
		}
		else
		{
			if(t == 108)
			{
				printf("Long long int %d!: ", n);
				long long int fact = 1, fact_previous = 1, fact_next = 1;
				int x;
				        for(x = 1 ; x-1 <= n ; x++)
				        {
				                if(fact_previous == fact_next ) //parbauda ieprieksejo ar nakamo dalits ar x
				                {
				                        fact_previous = fact;
				                        fact = fact * x;
				                        fact_next = fact / x;
				                }
				                else
				                {
				                        x = n+3;                // partrauc loop ja fact_previous nav vienads ar fact_next
				                        printf("can't dispaly choosen factorial \nclosest displayable factorial: ");
				                }
				        }
				if(x != n+3)            //ja faktorials ir iespejams parada ieprieksejo iespejamo faktorialu
				{                       // nesaprotu kapec parada n! pat tad, ja faktorials nav iespejams
				        printf("%lld\n", fact_previous);
				}
			}
			else
			{
			printf("Bad data type");
			}
		}
	}

return 0;
}
