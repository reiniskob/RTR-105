#include <stdio.h>

int main ()
{
unsigned  char c1,x,n,bin1,bin2;

printf ("Enter a symbol: ");
scanf ("%s", &c1);
n = 8;

n = n - 1;
bin1 = c1 >> n;
bin2 = bin1 & 00000001;
printf ("%d", bin2 | 00000000);

n = n - 1;
bin1 = c1 >> n;
bin2 = bin1 & 00000001;
printf ("%d", bin2 | 00000000);
n = n - 1;
bin1 = c1 >> n;
bin2 = bin1 & 00000001;
printf ("%d", bin2 | 00000000);
n = n - 1;
bin1 = c1 >> n;
bin2 = bin1 & 00000001;
printf ("%d", bin2 | 00000000);
n = n - 1;
bin1 = c1 >> n;
bin2 = bin1 & 00000001;
printf ("%d", bin2 | 00000000);
n = n - 1;
bin1 = c1 >> n;
bin2 = bin1 & 00000001;
printf ("%d", bin2 | 00000000);
n = n - 1;
bin1 = c1 >> n;
bin2 = bin1 & 00000001;
printf ("%d", bin2 | 00000000);
n = n - 1;
bin1 = c1 >> n;
bin2 = bin1 & 00000001;
printf ("%d\n", bin2 | 00000000);


   return 0;
}
