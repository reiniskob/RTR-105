//https://www.programiz.com/dsa/bubble-sort
//https://stackoverflow.com/questions/9513764/c-find-most-frequent-element-in-char-array


#include <stdio.h>
void printArray(char*, int);
void printASCII(char*, int);
void bubbleSort(char*, int);
void min(char*, int);
void max(char*, int);
void avg(char*, int);
void median(char*, int);
void mode(char*, int);


int main()
{
	char data[] = {100, 98, 104, 100, 98, 98, 100, 70, 70, 70,};
	int size = 100000;

	printf("Enter a charecters seperated by spaces:");

	size = sizeof(data) / sizeof(data[0]);

	bubbleSort(data, size);

	printf("Sorted array in ascending order:\n");
	printArray(data, size);
	printASCII(data, size);
	min(data, size);
	max(data, size);
	avg(data, size);
	median(data, size);
	mode(data, size);

}

void mode(char array[], int size){

	int str[255] = {0};
	int i, max, index;

	for(i = 0; array[i] != 0; i++){
   		++str[array[i]];
	}

	max = str[0];
	index = 0;
	for(i = 0; array[i] != 0; i++)
	{
	     	if( str[array[i]] > max)
     		{
			max = str[array[i]];
			index = i;
		}
	}

printf("Mode value is %c (%d)\n", array[index], (int)array[index]);

}

void median(char array[], int size){
	float median;
	if(size%2>0){
		median = array[(size-1)/2];
	printf("Median value is %c (%f)", (char)median, median);
	}
	else{
	median = (array[(size-1)/2]+array[(size+1)/2])/2;
	printf("Median value is %c (%f)", (char)median, median);
  	}
	printf("\n");

}

void avg(char array[], int size){
	double avg;
	for(int i = 0; i < size; ++i){
		avg = avg + (double)array[i];
	}
	avg=avg/(size);
	printf("Average value is %c (%f)", (char)avg, avg);
  	printf("\n");

}

void printArray(char array[], int size){
	for (int i = 0; i < size; ++i){
		printf("%c   ", array[i]);
 	}
  	printf("\n");
}

void printASCII(char array[], int size){
	for (int i = 0; i < size; ++i){
		printf("%d  ",(int)array[i]);
 	}
  	printf("\n");
}

void min(char array[], int size){
	printf("Smallest value is %c (%d)", array[0], (int)array[0]);
  	printf("\n");

}

void max(char array[], int size){
	printf("Largest value is %c (%d)", array[size-1], (int)array[size-1]);
  	printf("\n");

}

void bubbleSort(char array[], int size){
	// loop to access each array element
	for (int step = 0; step < size - 1; ++step){
		// loop to compare array elements
		for (int i = 0; i < size - step - 1; ++i){
			// compare two adjacent elements
			// change > to < to sort in descending order
			if (array[i] > array[i + 1]){
				// swapping occurs if elements
				// are not in the intended order
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
}

