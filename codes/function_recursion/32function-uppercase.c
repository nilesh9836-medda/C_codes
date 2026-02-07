/* Write a C program to turn lowercase letter to uppercase letter */

#include<stdio.h>

char touppr(char letter);

int main() {
	char upper,letter;
	printf("\nEnter your letter: ");
	scanf("%c", &letter);
	upper = touppr(letter);
	printf("\nResult = %c\n",upper);

	return 0;
}

char touppr(char letter) {
	if(letter>='a' && letter<='z')
		return (letter-32);
	else
		return letter;
}
