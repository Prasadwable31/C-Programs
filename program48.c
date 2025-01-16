// Write a program which accept distance in kilometer and convert it into meter. 
//(1 kilometer = 1000 meter)

// Input = 5
// Output = 5000

#include<stdio.h>

float KMtoMeter(float iNo)
{
	int Ans = 0;
	
	if(iNo > 0)
	{
		Ans =  iNo * 1000;
	}
	
	return Ans;
}

int main()
{
	float iValue = 0, iRet = 0;
	
	printf("Enter distance : ");
	scanf("%f",&iValue);
	
	iRet = KMtoMeter(iValue);
	
	printf("Distance in Meter : %.2f",iRet);
	
	return 0;
}
