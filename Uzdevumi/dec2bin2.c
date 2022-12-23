		//iesniegšanas laikā kods nestrādāja, jo bija pēdējā iesniegšanas diena.
		//bet izdevās salabot kodu nomainot c1 & 00001111 uz c1 & 0x0f
		//tagad kods strādā lietojot bitu operācijas
#include <stdio.h>
int main ()
{
unsigned  char c1,n,bin1;

printf ("Enter number from 0 to 9: ");
scanf (" %c", &c1);
n = 8;
printf ("Your number in binary:");


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
