// Write a program which accept number from user and return difference between summation of even digits and summation of odd digits
// Input = 2395
// Output = -15		( 2-15 )

#include<stdio.h>

int CountDiff(int iNo)
{
	int Sum1 = 0, Sum2 = 0, Rem = 0;
	int Diff = 0;
	
	while(iNo != 0)	
	{
		Rem = iNo % 10;

		if((Rem % 2) == 0)
			Sum1 = Sum1 + Rem;
			
		if((Rem % 2) != 0)
			Sum2 = Sum2 + Rem;
		
		iNo = iNo / 10;
	}
	
	Diff = Sum1 - Sum2;
	
	return Diff;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	iRet = CountDiff(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
