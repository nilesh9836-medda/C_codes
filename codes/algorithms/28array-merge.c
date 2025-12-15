/* Write a C program to merge two arrays */

#include<stdio.h>

int main() {
	int n,l1,l2,j;
	printf("Enter sizes of two arrys: ");
	scanf("%d%d", &l1, &l2);
	int ar1[l1],ar2[l2];
	printf("\nEnter numbers in both array: ");
	for(int i=0;i<l1;i++){
		printf("\nar1[%d]= ",i);
		scanf("%d", &ar1[i]);
	}
	for(int i=0;i<l2;i++){
		printf("\nar2[%d]= ",i);
		scanf("%d", &ar2[i]);
	}

	n=l1;
	l1=l1+l2;
	j=0;
	for(int i=n;i<l1;i++){
		if(j<l2){
			ar1[i]=ar2[j];
			j++;
		}
		else
			break;

	}

	printf("\n\t/*****ar1 & ar2 arrays are successfully merged*****/\n");
	for(int i=0;i<l1;i++)
		printf("ar1[%d]=%d\n",i,ar1[i]);

	return 0;
}
