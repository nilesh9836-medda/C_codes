/* Write a C program to find duplicate among 'n' numbers using array */

#include<stdio.h>

int main() {
	int n,flag=0;
	printf("Enter size of the array:");
	scanf("%d", &n);
	int ar[n];
	for(int i=0;i<n;i++){
		printf("\nar[%d]=",i);
		scanf("%d", &ar[i]);
	}
	flag=0;
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(ar[i]==ar[j+1]){
				flag++;
				printf("A duplicate found of %d at ar[%d]\n",ar[i],j+1);	
			}
		}
	}
	if(flag==0)
		printf("\nNo duplicate is found!\n");

	return 0;
}
