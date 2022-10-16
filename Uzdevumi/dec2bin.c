#include <stdio.h>
int main()
{
unsigned char dec;
printf("Enter a number:");
scanf("%c", &dec);
if (dec <= 1)
	{
	printf("Bin=00000001");
	}
	else
	{
		if (dec <= 2)
       		{
        	printf("Bin=00000010");
      		}
        	else
        	{
        		if (dec <= 3)
        		{
        		printf("Bin=00000011");
        		}
        		else
        		{
        		printf("Bin=00000100\n");
      			}
   return 0;
}}}
