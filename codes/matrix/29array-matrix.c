/* Write a C program to create a Matrix using 2D array */

#include<stdio.h>

int main() {
	int row, col;
	printf("Enter number of rows and columns: ");
	scanf("%d%d", &row, &col);
	int ar[row][col];	//2D array ar[][]
	printf("\nEnter values of the matrix: ");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("\nar[%d][%d]= ",i,j);
			scanf("%d", &ar[i][j]);
		}
	}

	printf("\n\n\tYour matrix is:\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("\t%d",ar[i][j]);
		}
		printf("\n");
	}

	return 0;
}
