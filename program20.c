// Write a program which accept number from user and return difference between summation of all its factors and non factors
// Input = 12
// Output = -34

#include<stdio.h>

int FactDiff(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int i = 0;
	int iValue1 = 0;
	int iValue2 = 0;
	
	for(i = 1; i<iNo; i++)
	{
		if((iNo % i) == 0)
		{
			iValue1 = iValue1 + i;
		}
		else if((iNo % i) != 0)
		{
			iValue2 = iValue2 + i;
		}
	}
	
	int iAns = 0;
	
	return iAns = iValue1 - iValue2;
	
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	iRet = FactDiff(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
