/* Write a example of a Pointer to an Array */

#include<stdio.h>

int main(){
	int mat[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int (*pa)[4];
	pa = mat;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("Address of mat[%d][%d] = %p\n",i,j,&mat[i][j]);
			printf("Adress of row[%d] = %p\n",i,(pa+i));
		}
	}

	return 0;
}
