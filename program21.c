// Write a program which accept number from user and display its multiplication of factors
// Input = 12
// Output = 144

#include<stdio.h>

int MultFact(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int i = 0;
	int Multi = 1;
	
	for(i = 1; i<iNo; i++)
	{
		if((iNo % i) != 0)
		{
			Multi *= i;
		}
	}
	
	return Multi;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	iRet = MultFact(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
