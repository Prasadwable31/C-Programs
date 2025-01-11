// Write a program to find odd factorial of given number
// Input = 5
// Output = 15 	  (5 * 3 * 1)

#include<stdio.h>

int OddFactorial(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int i = 0;
	int Fact = 1;
	
	for(i = 1; i <= iNo; i++)
	{
		if((i % 2) == 1)
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
	
	iRet = OddFactorial(iValue);
	
	printf("Odd Factorial of number is %d",iRet);
	
	return 0;
}
