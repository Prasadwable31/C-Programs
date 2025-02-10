// Write a program which accept number from user and return multiplication of all digits

#include<stdio.h>

int MultDigits(int iNo)
{
	int Sum = 1, Rem = 0;
	
	while(iNo != 0)	
	{
		Rem = iNo % 10;

		if(Rem == 0)
			Rem = 1;
		
		Sum = Sum * Rem;
		
		iNo = iNo / 10;
	}
	
	return Sum;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	iRet = MultDigits(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
