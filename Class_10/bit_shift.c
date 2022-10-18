#include <stdio.h>
int main() {

unsigned char c1, uc1 = 1;
c1 = 1;
printf("%d << %d = %d \n", uc1,c1,uc1<<c1);
c1 = c1+1;
printf("%d << %d = %d \n", uc1,c1,uc1<<c1);
c1 = c1+1;
printf("%d << %d = %d \n", uc1,c1,uc1<<c1);
c1 = c1+1;
printf("%d << %d = %d \n", uc1,c1,uc1<<c1);

uc1 = 128;
c1 = 1;
printf("%d >> %d = %d \n", uc1,c1,uc1>>c1);
c1 = c1+1;
printf("%d >> %d = %d \n", uc1,c1,uc1>>c1);
c1 = c1+1;
printf("%d >> %d = %d \n", uc1,c1,uc1>>c1);
c1 = c1+1;
printf("%d >> %d = %d \n", uc1,c1,uc1>>c1);
c1 = c1+1;
printf("%d >> %d = %d \n", uc1,c1,uc1>>c1);
c1 = c1+1;
printf("%d >> %d = %d \n", uc1,c1,uc1>>c1);
c1 = c1+1;
printf("%d >> %d = %d \n", uc1,c1,uc1>>c1);



   return 0;
}

