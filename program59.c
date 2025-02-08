// Write a program which accept number from user and count frequency of 4 in it.

#include<stdio.h>

int CountFour(int iNo)
{
	int Sum = 0, i = 1, Rem = 0;
	
	while(iNo != 0)
	{
		Rem = iNo % 10;
		
		if(Rem == 4)
		{
			Sum += i;
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
	
	iRet = CountFour(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
