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
	if(num==sum)
        	printf("%d is a Palindrome Number!!!\n",sum);
    	else
        	printf("%d is NOT a Palindrome Number\n",sum);
    
	return 0;
}
