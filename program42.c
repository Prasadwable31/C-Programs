// Accept amount is US dollar and return its corresponding value in Indian Currency. 
// Consider 1$ = 70 rupees.

#include<stdio.h>

int DollarToINR(int iNo)
{
	int Sum = 0;

	if(iNo > 0)
	{
		Sum = iNo * 70;	
	}
	
		return Sum;
		
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	iRet = DollarToINR(iValue);
	
	printf("Value in INR is %d",iRet);
	
	return 0;
}
