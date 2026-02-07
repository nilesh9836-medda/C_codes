/* Write a C program to calculate factorial value of the given number using recursion */

#include<stdio.h>

long int factorial(int n);

int main(){
	int n;
	printf("\nEnter the number: ");
	scanf("%d", &n);

	printf("\nFactorial of %d is = %ld\n",n,factorial(n));

	return 0;
}

long int factorial(int n){
	if(n==0)
		return 1;
	else
		return n*factorial(n-1);
}
