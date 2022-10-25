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
                printf("Char %d!: ",n);
                char fact = 1, fact_previous = 0, fact_next;
                int x = 0;
                        while(x <= n)
                        {
                                if(fact_previous == fact_next ) //parbauda ieprieksejo ar nakamo dalits ar x
                                {
                                        fact_previous = fact;
                                        x = x + 1;
                                        fact = fact * x;
                                        fact_next = fact / x;
                                }
                                else
                                {
                                        x = n+2;                // partrauc loop ja fact_previous nav vienads ar fact_next
                                        printf("can't dispaly choosen factorial\n");
                                }
                        }
                if(x != n+2)            //ja faktorials ir iespejams parada ieprieksejo iespejamo faktorialu
                {
                        printf("%d\n", fact_previous);
                }
        }
        else
        {
                if(t == 105)
       		{
		        printf("Char %d!: ", n);
		        int fact = 1, fact_previous = 0, fact_next;
		        int x = 0;
		                while(x <= n)
		                {
		                        if(fact_previous == fact_next ) //parbauda ieprieksejo ar nakamo dalits ar x
		                        {
		                                fact_previous = fact;
		                                x = x + 1;
		                                fact = fact * x;
		                                fact_next = fact / x;
		                        }
		                        else
		                        {
		                                x = n+2;                // partrauc loop ja fact_previous nav vienads ar fact_next
		                                printf("can't dispaly choosen factorial\n");
		                        }
		                }
		        if(x != n+2)            //ja faktorials ir iespejams parada ieprieksejo iespejamo faktorialu
		        {
		                printf("%d\n", fact_previous);
		        }
		}
       	 	else
       	 	{
       	 		if(t == 108)
        		{
				printf("Char %d!: ", n);
				long long int fact = 1, fact_previous = 0, fact_next;
				int x = 0;
				        while(x <= n)
				        {
				                if(fact_previous == fact_next ) //parbauda ieprieksejo ar nakamo dalits ar x
				                {
				                        fact_previous = fact;
				                        x = x + 1;
				                        fact = fact * x;
				                        fact_next = fact / x;
				                }
				                else
				                {
				                        x = n+2;                // partrauc loop ja fact_previous nav vienads ar fact_next
				                        printf("can't dispaly choosen factorial\n");
				                }
				        }
				if(x != n+2)            //ja faktorials ir iespejams parada ieprieksejo iespejamo faktorialu
				{
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

