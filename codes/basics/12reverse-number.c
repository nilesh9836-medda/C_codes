#include<stdio.h>

int main() {
	int n,num,d,sum;
	printf("Enter number:\n");
	scanf("%d", &num);
	n=num;
	sum=0;
	while(n>0){
		d=n%10;
		sum=sum*10+d;
		n=n/10;
	}
	printf("Reverse of %d is %d\n",num,sum);

	return 0;
}
