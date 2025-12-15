/* Passing matrix as function argument using pointer */

#include<stdio.h>
#define ROW 3
#define COL 3

int display(int (*m)[COL]){
	for(int i=0;i<ROW;i++){
		for(int j=0;j<COL;j++)
			printf("\t%d", *(*(m+i)+j));
		printf("\n");
	}
}

int main(){
	int mat[ROW][COL];
	printf("\nEnter elements of the matrix:\n");
	for(int i=0;i<ROW;i++)
		for(int j=0;j<COL;j++){
			printf("[%d][%d] = ",i,j);
			scanf("%d", &mat[i][j]);
		}
	display(mat);

	return 0;
}
