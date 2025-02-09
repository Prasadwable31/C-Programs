// Write a program which accept number from user and return the count of even digits


#include<stdio.h>

int CountEven(int iNo)
{
	int Sum = 0, Rem = 0;
	
	while(iNo != 0)	
	{
		Rem = iNo % 10;
		
		if((Rem / 2) * 2 == Rem)
		{
			Sum++;
		}
		
		iNo = iNo / 10;
	}
	
	return Sum;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	iRet = CountEven(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
