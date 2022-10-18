/*
78 dec -> 0100 1110 bin
7. bits > 0 (how to get it)
6. bits > 1 (how to get it)
5. bits > 0 (how to get it)
4. bits > 0 (how to get it)
3. bits > 1 (how to get it)
2. bits > 1 (how to get it)
1. bits > 1 (how to get it)
1. bits > 0 (how to get it)

7. bitam jābūt decimālā skaitļa 0. vietā
(0)100 1110 >> 7 -> 0000 000(0)
		(unsigned char)(c1<<0) >> 7
6. bitam jābūt decimālā skaitļa 1. vietā
(1)001 1100 >> 7 -> 0000 000(1)
		(unsigned char)(c1<<1) >> 7

to get a single bit use &
0100 1110 & 1000 0000 -> 0000 0000
*/
#include <stdio.h>
int main()
{
unsigned char c1;
int c2 = 0;
printf("Enter number:");
scanf("%c\n", &c1);
printf("%d\n",c1);
unsigned char c3 = (unsigned char)(c1 >> c2);

printf("%d",c3 & c2 );
printf("%d\n",c3);

   return 0;
}


