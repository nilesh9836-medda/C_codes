/* Meaning of arr and &arr for array arr[] */

#include<stdio.h>

int main(){
	int arr[4] = {1,2,3,4};
	printf("The value of arr = %p\n",arr);
	printf("The value of &arr = %p\n", &arr);
	printf("The value of (arr+1) = %p\n",arr+1);
	printf("The value of (&arr+1) = %p\n",(&arr+1));

	return 0;
}
