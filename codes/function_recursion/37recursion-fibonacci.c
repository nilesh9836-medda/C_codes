/* Write C program to print Fibonacci series using recursion */

#include<stdio.h>

int fibonacci(int n);

int main(){
	int n;
	printf("\nEnter the term position ");
	scanf("%d", &n);

	printf("\nThe required term is = %d\n",fibonacci(n));

	return 0;
}

int fibonacci(int n){
	if(n==1 || n==2)
		return 1;
	else
		return (fibonacci(n-2)+fibonacci(n-1));
}
