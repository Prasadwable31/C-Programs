// Write a program which accept number form user and print numbers till that number
// Input = 5
// Output = 1 2 3 4 5

#include<stdio.h>

void Display(int iNo)
{
	int i = 0;
	
	for(i = 1; i<=iNo; i++)
	{
		printf("%d ",i);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}
