#include "functions.h"
#include <stdio.h>


int x, y, z;
int main()
{
int x = 0, y = 0, k = 0;

	a0r0();         //function a0r0-without arguments and without return, tikai parada

	a1r0(x,y);      //fuinction a1r0-with arguments and without return, sanem argumentus un tos parada

	k = a0r1();     //a0r1-without arguments and with return, pamaina .h faila esosus argumentus un tos atgriez
	printf("arguments=0 return=%d\n", k);

	k = a1r1(x,y);  //a1r1-with arguments and with return, sanem argumentus un tos maina, un atgriez
	printf("arguments=%d retrun=%d\n", k-1, k-1);
return 0;
}
