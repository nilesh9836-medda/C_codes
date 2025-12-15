#include<stdio.h>
int main() {
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d%d", &a, &b);
	printf("\nBitwise OR operation of a and b =%d",a|b);
	printf("\nBitwise AND operation of a and b =%d",a&b);
	printf("\nBitwise Exclusive OR operation of a and b =%d",a^b);
	printf("\nBitwise NOT operation of a =%d",~a);

	return 0;
}
