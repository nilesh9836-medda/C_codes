/* Write a C program to add two integers using pointers and functions */

#include<stdio.h>

void sum(int*, int*, int*);
int main(){
	int n1,n2,t;
	printf("\nEnter two numbers: ");
	scanf("%d%d", &n1, &n2);

	sum(&n1,&n2,&t);
	printf("\nTotal = %d\n",t);

	return 0;
}

void sum(int *a, int *b, int *c){
	*c = *a + *b;
}
