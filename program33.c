// Write a program which accept number form user and print its number line
// Input = 4
// Output = -4 -3 -2 -1 0 1 2 3 4 

#include<stdio.h>

void Display(int iNo)
{
	int i = 0;
	
	int temp = -iNo;
	
	for(i = temp; i<=iNo; i++)
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
