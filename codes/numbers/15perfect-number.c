#include<stdio.h>

int main() {
	int num,n,f,sum=0;
	printf("Enter a number to check:\n");
	scanf("%d", &num);
	n=num;
	sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0)
			sum+=i;
	}
	if(sum==num)
		printf("%d is a Perfect Number!!!\n",num);
	else 
		printf("%d is NOT a Perfect Number\n",num);

	return 0;
}
