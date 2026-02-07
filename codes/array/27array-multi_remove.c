/* Write a C program to remove multiple numbers in an array */

#include<stdio.h>

int main() {
	int n,num,count,k,pos,flag;
	printf("\nEnter the size of the array: ");
	scanf("%d", &n);
	int ar[n];
	for(int i=1;i<=n;i++){
		printf("\nar[%d]= ",i);
		scanf("%d", &ar[i]);
	}
	printf("\nHow many numbers you want to remove?: ");
	scanf("%d", &count);

	k=1;
	while(k<=count){
		printf("\n\tnumber: ");
		scanf("%d", &num);
		flag=0;
		for(int i=1;i<=n;i++){
			if(ar[i]==num){
				flag++;
				pos=i;
				printf("\n\t.....%d is found at ar[%d]",num,pos);
				break;
			}
		}
		if(flag==0){
			printf("\n\t....%d is NOT found!!!",num);
			continue;
		}
		//n--;
		//printf("\nNow array size=%d",n);
		for(int i=pos;i<n;i++){
			//if(i==pos)
			ar[i]=ar[i+1];
		}
		printf("\n\n\t\t/********UPDATED********/\n");
		n--;
                printf("\nNow array size=%d\n",n);
		for(int i=1;i<=n;i++)
			printf("ar[%d]=%d\n",i,ar[i]);

		k++;
	}

	return 0;
}
