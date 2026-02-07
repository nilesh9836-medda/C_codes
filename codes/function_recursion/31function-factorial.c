/* Write a C program to calculate factorial of the given number using function */

#include<stdio.h>

long int factorial(int n);

int main() {
	int n;
	printf("\nEnter your number to calculate its factorial: ");
	scanf("%d", &n);

	printf("\nThe factorial of %d is= %ld\n",n,factorial(n));

	return 0;
}

long int factorial(int n){
	long int fact=1;
	if(n==0)
		fact=1;
	else{
		for(int i=1;i<=n;i++)
			fact*=i;
	}

	return fact;
}
