// Accept one number form user and check whether number is even or odd

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
	if((iNo % 2) == 0)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	bRet = ChkEven(iValue);
	
	if(bRet == 1)
	{
		printf("Number is Even");
	}
	else
	{
		printf("Number is Odd");
	}
	
	return 0;
}
