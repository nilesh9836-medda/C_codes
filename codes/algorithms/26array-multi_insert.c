/* Write a C program to insert numbers at given positions in an array */

#include<stdio.h>

int main() {
	int n,pos,num,count,prev,curr,k;
	printf("Enter size of the array: ");
	scanf("%d", &n);
	int ar[n];
	for(int i=1;i<=n;i++){
		printf("\nar[%d]= ",i);
		scanf("%d", &ar[i]);
	}
	printf("\nHow many number you want to insert: ");
	scanf("%d", &count);

	k=1;
	while(k<=count){
		n++;
		printf("\n\tNow size of the array is: %d",n);
		printf("\n\tnumber: ");
		scanf("%d", &num);
		printf("\n\tposition: ");
		scanf("%d", &pos);
		//n++;
		//printf("\n\tNow size of the array is: %d",n); 
		for(int i=pos;i<=n;i++){
			if(i==pos){
				curr=ar[pos];
				ar[pos]=num;
				prev=curr;
			}
			else{
				curr=ar[i];
				ar[i]=prev;
				prev=curr;
			}
		}
	
		printf("\n\n\t\t/*********!!UPDATED!!*********/\n");
		for(int i=1;i<=n;i++)
			printf("ar[%d]=%d\n",i,ar[i]);

		k++;
	}

	return 0;
}
