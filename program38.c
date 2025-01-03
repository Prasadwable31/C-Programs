// Write a program to find factorial of given number
// Input = 5
// Output = 120

#include<stdio.h>

int Factorial(int iNo)
{
	int Fact = 1;
	int i = 0;
	
	for(i = 1; i<=iNo; i++)
	{
		Fact = Fact * i;
	}
		return Fact;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	iRet = Factorial(iValue);
	
	printf("Factorial of number is %d",iRet);
	
	return 0;
}
