// Write a program which accept range from user and return addition of all even numbers in between that range
// Note : Enter only positive number

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
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
			if(((i / 2) * 2) == i)				// Even without % operator
			{
				Sum = Sum + i;
			}
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
	
	iRet = RangeSumEven(iValue1, iValue2);
	
	printf("Addition is %d",iRet);
	
	return 0;
}
