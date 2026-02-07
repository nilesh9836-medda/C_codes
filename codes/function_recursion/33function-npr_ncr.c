/* Write a C program to calculate npr and ncr using function */

#include<stdio.h>

long int factorial(int n);

int main() {
	int npr,ncr,n,r;
	printf("\nEnter the value of n & r: ");
	scanf("%d%d", &n, &r);
	
	npr = factorial(n)/factorial(n-r);
	ncr = factorial(n)/(factorial(r)*factorial(n-r));

	printf("\nnpr = %d\nncr = %d\n",npr,ncr);

	return 0;
}

long int factorial(int n) {
	long int fact=1;
	if(n==0)
		return 1;
	else if(n>0) {
		for(int i=1;i<=n;i++)
			fact*=i;
		return fact;
	}
	else
		printf("\nError!!!");
}
