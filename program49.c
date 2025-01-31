// Write a program which accept temperature in Fahrenheit and convert it into celsius
// (1 celsius = (Fahrenheit - 32) * (5/9)) 
// Note ==> We have to Apply Bodmass here

// Input = 10
// Output = -12.2222

#include<stdio.h>

double FhtoCs(float fTemp)
{
	float Ans = 0.0;
	
	if(fTemp > 0)
	{
		Ans = ((fTemp - 32) * 5 / 9);
	}
	
	return Ans;
}

int main()
{
	float fValue = 0.0;
	double dRet = 0.0;
	
	printf("Enter tempreature in Fahrenheit : ");
	scanf("%f",&fValue);
	
	dRet = FhtoCs(fValue);
	
	printf("Tempreature in Celsius : %.4f",dRet);
	
	return 0;
}
