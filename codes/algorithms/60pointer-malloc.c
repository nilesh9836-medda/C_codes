/* Allocating memory during runtime using malloc() */

#include<stdio.h>
#include<stdlib.h>

int main(){
	int *p, n, sum;
	float avg;
	printf("\nEnter total no. of students: ");
	scanf("%d", &n);
	p = (int*)malloc(n * sizeof(int));
	if(p == NULL){
		printf("\nMemory allocation is not possible\n");
		exit(1);
	}
	for(int i=0;i<n;i++){
		printf("\nEnter marks of students: ");
		scanf("%d", p+i);
		sum = sum + *(p+i);
	}
	avg = (float)sum/n;
	printf("\nAverage students marks = %.2f\n",avg);

	return 0;
}
