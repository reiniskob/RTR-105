#include <stdio.h>
int main ()
{
unsigned  char c1,n,bin1;

printf ("Enter number: ");
scanf ("%s", &c1);
n = 8;

c1 = (unsigned char)c1 & 00001111;

n = n - 1;
bin1 = c1 >> n;
printf ("%u", (unsigned char)bin1 & 00000001);

n = n - 1;
bin1 = c1 >> n;
printf ("%u", (unsigned char)bin1 & 00000001);

n = n - 1;
bin1 = c1 >> n;
printf ("%u", (unsigned char)bin1 & 00000001);

n = n - 1;
bin1 = c1 >> n;
printf ("%u", (unsigned char)bin1 & 00000001);

n = n - 1;
bin1 = c1 >> n;
printf ("%u", (unsigned char)bin1 & 00000001);

n = n - 1;
bin1 = c1 >> n;
printf ("%u", (unsigned char)bin1 & 00000001);

n = n - 1;
bin1 = c1 >> n;
printf ("%u", (unsigned char)bin1 & 00000001);

n = n - 1;
bin1 = c1 >> n;
printf ("%u\n", (unsigned char)bin1 & 00000001);


   return 0;
}
