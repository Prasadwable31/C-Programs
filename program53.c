// Write a program which accept range from user and return addition of all numbers in between that range
// Note : Enter only positive number

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
		
	int i = 0, Sum = 0;
		
	if(iStart < 0 || iEnd < 0 || iStart > iEnd)
	{
		printf("Invaild Range...!\n");	
		
		return;
	}
	else
	{
		for(i = iStart; i <= iEnd; i++)
		{
			Sum = Sum + i;
		}
		
		return Sum;
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0, iRet = 0;
	
	printf("Enter Starting Point : ");
	scanf("%d",&iValue1);
	
	printf("Enter Ending Point : ");
	scanf("%d",&iValue2);
	
	iRet = RangeSum(iValue1, iValue2);
	
	printf("Addition is %d",iRet);
	
	return 0;
}
