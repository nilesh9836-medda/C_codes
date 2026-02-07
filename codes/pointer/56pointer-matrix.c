/* Matrix using pointer */

#include<stdio.h>

int main(){
	int mat[2][3], sum=0;

	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("\nmat[%d][%d] = ",i,j);
			scanf("%d", (*(mat+i)+j));
			sum = sum + *(*(mat+i)+j) ;
		}
	}
	printf("\nRequired sum of all the elements in the matrix = %d\n",sum);

	return 0;
}
