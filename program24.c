// Write a program which accept number from user and return summation of all its non factors
// Input = 12
// Output = 50

#include<stdio.h>

int SumNonFact(int iNo)
{
	if(iNo <= 0)
	{
		iNo = -iNo;
	}

	int i = 1;
	int Sum = 0;
		
	while(i < iNo)
	{
		if((iNo % i) != 0)
		{
			Sum = Sum + i;
		}
		
		i++;
	}
		return Sum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	iRet = SumNonFact(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
