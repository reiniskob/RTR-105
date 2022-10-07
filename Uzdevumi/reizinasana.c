#include <stdio.h>
long int main() {
	int x;
	int y;

	printf ("Enter the 1st number: ");	// Pajauta pirmo skaitli
	int d =  scanf("%d", &x);
        printf ("\nEnter the 2nd number: ");	// Pajauta otro skaitli
        int e = scanf("%d", &y);
	printf("\n1st number multiplied by 2nd number= %ld \n",(long)x*y ); 	// sareizina skaitlus un parada tos
	return 0;
}
