// Write a program which accept number from user and display its multiplication of factor
// Input = 12
// Output = 144

#include<stdio.h>

int MultFact(int iNo)
{
	int iCnt = 0;
	
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	
	int Multi = 1;
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			Multi = Multi * iCnt;
		}
		    
	}
	return Multi;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	iRet = MultFact(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
