// Write a program which accept number from user and check wheather it contains 0 in it or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
	while(iNo != 0)
	{
		if((iNo % 10) == 0)
		{
			return 1;
		}
		iNo = iNo / 10;
	}
	
	return;
}

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	bRet = ChkZero(iValue);
	
	if(bRet == TRUE)
	{
		printf("It Contains Zero");
	}
	else
	{
		printf("There is no Zero");
	}
	
	return 0;
}
