#include<stdio.h>

int main() {
	int n;
	float sum;
	printf("Enter the length of the series:\n");
	scanf("%d", &n);
	sum=0;
	printf("So the sum series is:\n");
	for(int i=1;i<=n;i++){
		printf("+1/%d",i);
		sum=sum+(1/(float)i);
	}
	printf("\n= %.2f",sum);

	return 0;
}
