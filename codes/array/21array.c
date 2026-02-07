#include<stdio.h>
int main() {
	int n;
	printf("Enter the length of array:");
	scanf("%d", &n);
	int ar[n];
	printf("\nEnter elements of the array:\n");
	for(int i=0;i<n;i++){
		scanf("%d", &ar[i]);
	}
	printf("\nElements in the array:\n");
	for(int j=0;j<n;j++){
		printf("ar[%d]=%d\n",j,ar[j]);
	}

	return 0;
}
