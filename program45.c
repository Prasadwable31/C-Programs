// Write a program which returns difference between Even factorial and Odd factorial of given number
// Input = 5
// Output = -7 	  (8 - 15)

#include<stdio.h>

int EvenFactorial(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int i = 0;
	int EvenFact = 1, OddFact = 1;
	
	for(i = 1; i <= iNo; i++)
	{
		if((i % 2) == 0)
		{
			EvenFact = EvenFact * i;
		}
		
		if((i % 2) == 1)
		{
			OddFact = OddFact * i;
		}
	}
	
	return EvenFact - OddFact;
	
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
