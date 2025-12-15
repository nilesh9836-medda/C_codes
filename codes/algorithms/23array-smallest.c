#include<stdio.h>
int main(){
	int n,sm;
	printf("Enter length of the array: \n");
	scanf("%d", &n);
	int ar[n];
	printf("Enter elements the array:\n");
	for(int i=0;i<n;i++)
		scanf("%d", &ar[i]);
	sm=ar[0];
	printf("\nThe elements in the array:\t");
	for(int i=0;i<n;i++){
		printf("%d\t",ar[i]);
		if(sm>ar[i])
			sm=ar[i];
	}
	printf("\nThe smallest elements in the array is = %d\n",sm);

	return 0;
}
