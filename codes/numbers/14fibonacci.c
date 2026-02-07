#include<stdio.h>

int main() {
	int f=0,s=1,t,n;
	printf("Enter length of fibonacci series:\n");
	scanf("%d", &n);
	printf("\nThe fibonacci series of length %d is:\n",n);
	for(int i=0;i<n;i++){
		printf("%d\t",f);
		t=f+s;
		f=s;
		s=t;
	}

	return 0;
}
