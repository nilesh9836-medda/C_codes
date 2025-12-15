/* Write a C program to multiply two mxn order matrices using two dimensional array */

#include<stdio.h>
#include<stdlib.h>

int main(){
	int r1,c1,r2,c2,sum=0;
	printf("\nEnter the numbers of rows and columns of the 1st Matrix : ");
	scanf("%d%d", &r1, &c1);
	printf("\nEnter the numbers of rows and columns of the 2nd Matrix : ");
        scanf("%d%d", &r2, &c2);
	if(c1!=r2){
		printf("\n!!!ERROR!!!-----Matrix Order Mismatch------\n");
		exit(0);
	}
	int a[r1][c1],b[r2][c2],m[r1][c2];
	
	printf("\nEnter values of 1st Matrix:\n");
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			printf("\na[%d][%d]= ",i,j);
			scanf("%d", &a[i][j]);
	       }
	}
	printf("\nEnter values of 2nd Matrix:\n");
        for(int i=0;i<r2;i++){
                for(int j=0;j<c2;j++){
                        printf("\nb[%d][%d]= ",i,j);
                        scanf("%d", &b[i][j]);
               }
        }

	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			sum=0;
			for(int k=0;k<r2;k++){
				sum=sum+ (a[i][k] * b[k][j]);
			}
			m[i][j]=sum;
		}
	}

	printf("\n\n\t\t----------RESULT----------\n\n");
	for(int i=0;i<r1;i++){
                for(int j=0;j<c2;j++){
                        printf("%d\t",m[i][j]);
                }
		printf("\n");
        }

	return 0;
}
