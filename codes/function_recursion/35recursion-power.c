/* Write a C program to calculate value of a number with power 'n' using rescursion */

#include<stdio.h>

long int powr(int x,int y);

int main(){
	int power,base;
	long int value;
	printf("\nEnter values of base and power: ");
	scanf("%d%d", &base, &power);
	value=powr(base,power);
	printf("\nResult = %ld\n",value);

	return 0;
}

long int powr(int x,int y){
	if(y==0)
		return 1;
	else
		return x*powr(x,(y-1));
}
