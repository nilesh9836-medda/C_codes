/* Write a C program to square a number using pointer */

#include<stdio.h>

int main(){
	int num, result, *presult=NULL;
	presult = &result;
	printf("\nEnter a number : ");
	scanf("%d", &num);
	*presult = num * num;
	printf("\nSquare of %d is %d",num,result);

	return 0;
}
