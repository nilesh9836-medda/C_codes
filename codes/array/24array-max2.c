/* Write a C program to find second maximum number in 'n' numbers using array */

#include<stdio.h>
int main() {
	int n,temp;
	printf("Enter the length of the array:\n");
	scanf("%d", &n);
	int ar[n];
	printf("Enter elements of the array:\n");
	for(int i=0;i<n;i++)
		scanf("%d", &ar[i]);
	printf("The array elements are:\t");
	for(int i=0;i<n;i++)
		printf("%d\t", ar[i]);
	for(int i=0;i<n-1;i++){
		if(ar[0]<ar[i+1])
		{
			temp=ar[0];
			ar[0]=ar[i+1];
			ar[i+1]=temp;
		}
		if(ar[1]<ar[0] && ar[1]<ar[i+1]){
			temp=ar[1];
			ar[1]=ar[i+1];
			ar[i+1]=temp;
		}
	}
	printf("\nThe second maximum element is =\t%d\n",ar[1]);

	return 0;
}
