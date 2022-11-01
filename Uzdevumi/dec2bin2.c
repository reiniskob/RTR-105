#include <stdio.h>
int main ()
{
unsigned  char c1,n,bin1;

printf ("Enter number: ");
scanf (" %c", &c1);
n = 8;

c1 = (unsigned char)c1 & 0x0f;

n = n - 1;
bin1 = c1 >> n;
printf ("%u", (unsigned char)bin1 & 0x01);

n = n - 1;
bin1 = c1 >> n;
printf ("%u", (unsigned char)bin1 & 0x01);

n = n - 1;
bin1 = c1 >> n;
printf ("%u", (unsigned char)bin1 & 0x01);

n = n - 1;
bin1 = c1 >> n;
printf ("%u", (unsigned char)bin1 & 0x01);

n = n - 1;
bin1 = c1 >> n;
printf ("%u", (unsigned char)bin1 & 0x01);

n = n - 1;
bin1 = c1 >> n;
printf ("%u", (unsigned char)bin1 & 0x01);

n = n - 1;
bin1 = c1 >> n;
printf ("%u", (unsigned char)bin1 & 0x01);

n = n - 1;
bin1 = c1 >> n;
printf ("%u\n", (unsigned char)bin1 & 0x01);


   return 0;
}
