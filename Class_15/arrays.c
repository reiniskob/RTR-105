//masīvu nepieciešamība
//identikatoru palīdzība a[0],a[1]
//alternatīva - a0, a1, a2
//masīva gadījumā jāmaina indekss, i=0 => a[i], i=1 => a[i]
//
// pirmais indekss ir 0
// masīva adrese ir o elementa adrese
// int array[5] = {0,1,2,3,4};

#include <stdio.h>
int main()
{
	int i_array[10];
	int i_array2[5]={1,2,3}; // pedejie 2 bus ar 0 vertibam

	int i_array2D[2][3] = {{11,12,13},{21,22,23}}; 	//[2]-rindu skaits
								//[3]-kolonu skaits
//printf("masīva i_array addres: %p", i_array)
//printf("masīva i_array 0. ele vertiba: %d", i_array[0])
//printf("masīva i_array 0. ele addrese: %p", &i_array[0])

	printf("%d,%d,%d\n",i_array2D[0][0],i_array2D[0][1],i_array2D[0][2]);
	printf("%d,%d,%d\n",i_array2D[1][0],i_array2D[1][1],i_array2D[1][2]);

	printf("masīva i_array2 1. ele addrese: %d\n", *(i_array2+1));//nomaina adresi un parada vertibu



   return 0;
}

