#include <stdio.h>

void a0r0(void)
{
        printf("arguments=0 return=0\n");
}

void a1r0(int a, int r)
{
        a++;
        printf("arguments=%d return=%d\n", a, r);
}

int a0r1()
{
int z;
	z = 1;
return z;
}

int a1r1(int a, int r)
{
int z;
        a++;
        r++;
        z = a + r;
return z;
}
