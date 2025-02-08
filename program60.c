// Write a program which accept number from user and count frequency of such a digits which is less than 6

#include<stdio.h>

int Count(int iNo)
{
	int Sum = 0, i = 1, Rem = 0;
	
	while(iNo != 0)	
	{
		Rem = iNo % 10;
		
		if(Rem < 6)
		{
			Sum = Sum + i;
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
	
	iRet = Count(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
