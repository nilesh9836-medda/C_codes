/* Write a C program to print stored value and address of a variable using pointer  */

#include<stdio.h>

int main(){
	int x, *px = NULL;
	px = &x;
	printf("\nEnter the value of X : ");
	scanf("%d", &x);

	printf("Address of x using variable = %p\n", &x);
	printf("Address of x using pointer = %p\n", px);
	printf("Value of x using variable = %d\n", x);
	printf("Value of x using pointer = %d\n", *px);

	return 0;
}
