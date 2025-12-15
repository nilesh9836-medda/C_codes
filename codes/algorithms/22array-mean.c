/* Write a C program to calculate mean of 'n' numbers using array */

#include<stdio.h>
int main() {
	int n, sum=0;
	float mean;
	printf("Enter length of the array:\n");
	scanf("%d", &n);
	int ar[n];
	printf("Enter elements of the array:\n");
	for(int i=0;i<n;i++)
		scanf("%d", &ar[i]);
	printf("\nElements in the array:\t");
	for(int i=0;i<n;i++){
		printf("%d\t", ar[i]);
		sum+=ar[i];
	}
	mean=(float)sum/n;
	printf("\nThe mean of array elements is = %.2f\n",mean);
	
	return 0;	
}
