/* Write a C program to take a string as input and print the string */

#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	printf("Enter your name: ");

	fgets(str,sizeof(str),stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("\nYour name is %s\n",str);

	return 0;
}
