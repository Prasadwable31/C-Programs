// Write a program which accept radius of circle from user and calculate its area.
// Consider value of PI as 3.14 (Area = PI * Radius * Radius)

// Input = 5.3
// Output = 88.2026

#include<stdio.h>

#define PI 3.14

double CircleArea(float fRadius)
{
	
//	float PI = 3.14;
	float Ans = 0.0;
	
	if(fRadius > 0)
	{
		Ans = PI * (fRadius * fRadius);
	}	
	
	return Ans;
}

int main()
{
	float fValue = 0.0f;
	double dRet = 0.0f;
	
	printf("Enter Radius : ");
	scanf("%f",&fValue);
	
	dRet = CircleArea(fValue);
	
	printf("Area of Circle is : %f",dRet);
	
	return 0;
}
