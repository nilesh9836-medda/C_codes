/* Write a C program to calculate GCD and LCM of two given numbers using recursion */

#include<stdio.h>

int GCD(int a, int b);

int main(){
	int n1,n2,gcd,lcm;
	printf("\nEnter two numbers: ");
	scanf("%d%d", &n1, &n2);

	gcd=GCD(n1,n2);
	lcm=(n1*n2)/gcd;
	printf("\nGCD = %d\nLCM = %d\n",gcd,lcm);

	return 0;
}

int GCD(int a,int b){
	if(b!=0)
		return GCD(b,(a%b));
	else
		return a;
}
