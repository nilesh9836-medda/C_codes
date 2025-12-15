/* Write a program using structures to read and display the information about a student. */

#include<stdio.h>
#include<string.h>

int main(){

	struct student
	{
		int roll_no;
		char name[80];
		float fees;
		char DOB[80];
	};
	
	struct student stud1;
	printf("\n Enter the roll number : ");
	scanf("%d", &stud1.roll_no);
	getchar();
	
	printf("\n Enter the name : ");
	fgets(stud1.name,sizeof(stud1.name),stdin);
	stud1.name[strcspn(stud1.name,"\n")] ='\0';
	printf("\n Enter the fees : ");
	scanf("%f", &stud1.fees);
	printf("\n Enter the DOB : ");
	scanf("%s", stud1.DOB);
	
	printf("\n ********STUDENT'S DETAILS *******");
	printf("\n ROLL No. = %d", stud1.roll_no);
	printf("\n NAME = %s", stud1.name);
	printf("\n FEES = %f", stud1.fees);
	printf("\n DOB = %s\n", stud1.DOB);

	return 0;
}
