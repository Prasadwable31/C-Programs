// Write a program which accept area in squrae feet and convert it into square meter
//(1 squrae feet = 0.0929 square meter)

// Input = 5
// Output = 0.464515

#include<stdio.h>

double SquareMeter(int iValue)
{
	float Ans = 0.0;
	
	if(iValue > 0)
	{
		Ans = iValue * 0.09290304;
	}
	
	return Ans;
}

int main()
{
	int iValue = 0;
	double dRet = 0.0;
	
	printf("Enter area in square feet : ");
	scanf("%d",&iValue);
	
	dRet = SquareMeter(iValue);
	
	printf("Converted Value is : %f",dRet);
	
	return 0;
} 
