// Check Prime Number in C

#include<stdio.h>
int main(){
	int n, count=0;
	printf("Enter the number you want to check: ");
	scanf("%d", &n);
	
	for(int i=1; i<=n/2; i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==1)
		printf("%d is a Prime Number!!!\n",n);
	else
		printf("%d is NOT a Prime Number\n",n);

	return 0;
}
