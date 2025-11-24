/* Write a C program to find average of numbers in array using Pointer */

#include<stdio.h>
#define MAX 5

float average(int *list){
	int sum = 0.0;
	for(int i=0;i<MAX;i++)
		sum = sum + *(list+i);
	return (float)sum/MAX;
}

int main(){
	int arr[MAX];
	printf("\nEnter 5 elements: ");
        for(int i=0;i<MAX;i++)
		scanf("%d", &arr[i]);
	printf("\nAverage of numbers in the array = %.3f\n",average(arr));

	return 0;
}
