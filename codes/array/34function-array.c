/* Write a C program to do some operations on Array using function */

#include<stdio.h>

void display(int ar[],int n);

int main(){
	int n;
	printf("\nEnter size of the array: ");
	scanf("%d", &n);
	int ar[n];
	printf("\nEnter values in the array:");
	for(int i=0;i<n;i++){
		printf("\nar[%d]= ",i);
		scanf("%d", &ar[i]);
	}
	display(ar,n);

	return 0;
}

void display(int ar[],int n){
	printf("\nDisplaying the Array ->\n");
	for(int i=0;i<n;i++)
		printf("ar[%d] = %d\n",i,ar[i]);
}
