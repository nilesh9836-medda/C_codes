/* Write a C program to find the minimum number in an array */

#include<stdio.h>

int find(int a, int b);

int main(){
	int n,min;
	printf("Enter size of array: ");
	scanf("%d", &n);
	int ar[n];
	for(int i=0;i<n;i++){
		printf("\nar[%d] = ",i);
		scanf("%d", &ar[i]);
	}

	min=ar[0];
	for(int i=1;i<n;i++){
		min=find(min,ar[i]);
	}
	printf("\nMinimum number = %d\n",min);

	return 0;
}

int find(int a, int b){
	return (a<b)?a:b;
}
