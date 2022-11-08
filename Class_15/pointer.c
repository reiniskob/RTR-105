#include <stdio.h>
int main()
{
	int i_value = 6324;
	printf("i_value =%d\n",i_value);
	printf("sizeof(i_value) = %ld bytes\n",sizeof(i_value));

	int *i_pointer = &i_value;
	printf("\ni_pointer (address) = %p\n", i_pointer);
	printf("i_value (found by address) = %d\n", *i_pointer);
	printf("sizeof(i_pointer) = %ld bytes\n",sizeof(i_pointer));

	//*i_pointer = (*i_pointer)+1; 	//nestrada jo zemaka prioritate un 
					//ieguta vertiba nav saistita ar nevienu mainigo

	*i_pointer = (*i_pointer)+1;
	printf("i_value (found by ptr after increment) = %d\n\n", i_value);


	double d_value = 1.3e-3;
        printf("d_value =%f\n",d_value);
        printf("sizeof(d_value) = %ld bytes\n",sizeof(d_value));

        double *d_pointer = &d_value;
        printf("\nd_pointer (address) = %p\n", d_pointer);
        printf("d_value (found by address) = %f\n", *d_pointer);
        printf("sizeof(d_pointer) = %ld bytes\n",sizeof(d_pointer));

        *d_pointer = (*d_pointer)+1;
        printf("d_value (found by ptr after increment) = %f\n", d_value);

   return 0;
}

