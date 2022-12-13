#include <stdio.h>

void bubbleSortAWriteToB(const char a[], char * b[]);
int N;
int main(void){
    int i;

	// initialize array
	char * sorted_letters[N];
	char letters[N];
	printf("Enter letters without spaces:");
	scanf("%s",leters[N]);

    // sort array
    bubbleSortAWriteToB(letters,sorted_letters);

    // print sorted array
    for (i=0;i<N;i++){
        printf("%c\n", *sorted_letters[i]);
    }

    return 0;
}

void bubbleSortAWriteToB(const char a[], char * b[]){
    char * temp;
    int i,j;

    // initialize b array to hold pointers to each element in a
    for (i=0;i<N;i++){
        b[i] = (char *)(a) + i;
    }

    // in-place sort the b array
    for(i=0;i<N;i++){
        for(j=i+1;j<N-1;j++){
            if(*b[j-1]>*b[j]){
                temp = b[j];
                b[j] = b[j-1];
                b[j-1] = temp;
            }
        }   
    }
}
