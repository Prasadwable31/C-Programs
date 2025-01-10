// Write a program to find even factorial of given number
// Input = 5
// Output = 8 	  (4 * 2)

#include<stdio.h>

int EvenFactorial(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int i = 0;
	int Fact = 1;
	
	for(i = 1; i <= iNo; i++)
	{
		if((i % 2) == 0)
		{
			Fact = Fact * i;
		}
	}
	
	return Fact;
	
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	iRet = EvenFactorial(iValue);
	
	printf("Even Factorial of number is %d",iRet);
	
	return 0;
}
