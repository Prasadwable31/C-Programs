// Write a program which accept name form user and print that name
// Input = Hello
// Output = Hello

#include<stdio.h>

int main()
{
	char Name[30];
	
	printf("Please enter full name : ");
	scanf("%s",Name);
	
	printf("Your Name is : %s",Name);
	
	return 0;
}
