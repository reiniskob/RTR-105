//#include <a0r0.h>
//#include <a1r0.h>
//#include <a0r1.h>
//#include <a1r1.h>

#include <stdio.h>

void a0r0(void);
void a1r0(int, int);
int a0r1(void);
int a1r1(int, int);


int x, y, z;
int main()
{
int x = 0, y = 0, k = 0;
	a0r0();		//a0r0-without arguments and without return
	a1r0(x,y);	//a1r0-with arguments and without return
	k = a0r1();	//a0r1-without arguments and with return
	printf("a0r%d\n", k);
	k = a1r1(x,y);	//a1r1-with arguments and with return
	printf("a%dr%d\n", k-1, k-1);
return 0;
}

void a0r0(void)
{
	printf("a0r0\n");
}

void a1r0(int a, int r)
{
	a++;
	printf("a%dr%d\n", a, r);
}

int a0r1()
{
	z = 1;
return z;
}

int a1r1(int a, int r)
{
	a++;
	r++;
	z = a + r;
return z;
}




