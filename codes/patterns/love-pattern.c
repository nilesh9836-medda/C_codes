#include<stdio.h>
int main() {
	int r;
	printf("Enter size: \n");
	scanf("%d", &r);
	for(int i=1; i<=r; i++){
		for(int k=r-1; k>=i; k--)
			printf(" ");
		for(int j=1; j<=(2*i)-1; j++){
			printf("*");
		}
		for(int l=(2*r)-(2*i); l>=1; l--)
			printf(" ");
		for(int m=1; m<=(2*i)-1; m++){
			printf("*");
		}

		for(int a=1; a<(2*r)-1; a++)
			printf(" ");
		for(int b=(2*r)-(2*i); b>=1; b--)
			printf("*");
		printf("\n");
	}

	return 0;
}

