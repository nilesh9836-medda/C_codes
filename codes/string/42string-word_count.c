/* Write a C program to count no. of words in a sentence using string */

#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	int count=1, len;
	
	printf("Enter a sentence: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")] = '\0';

	len=strlen(str);
	for(int i=0;i<len;i++){
		if(str[i] == ' ')
			count++;
	}
	printf("\nNo. of words = %d\n",count);

	return 0;
}
