//operācijas operands1 operācija operands2 == operācijas rezultāts
//operācijas datu tips ir "lielākais" kurš tiek lietots operācijā
//matematical +,-,*,/,%
//logical &&,||,
//logical per bits: &,|,^,!
//bit shift: >>,>>
//
//kā strādā operācijas?
// datu tipu lietosnaas dazados datu tipos
//oper izpildisanas seciba
//


#include <stdio.h>
int main() {
char c = 'A';
int i = 2000;
float f  = 2.3;
double d = -5.6e4;

printf(" %d * %d ", c,i);
printf(" =%d \n",c*i);


   return 0;
}

