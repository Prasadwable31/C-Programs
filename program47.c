// Write a program which accept width & height of rectangle from user and calculate its area
// (Area = Width * Height)

// Input = 5.3 	    9.78 
// Output = 51.834

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
	float Ans = 0.0;
	
	if(fWidth > 0 && fHeight > 0)
	{
		Ans = fWidth * fHeight;
	}
	
	return Ans;
}

int main()
{
	float fValue1 = 0.0, fValue2 = 0.0;
	double dRet = 0.0;
	
	printf("Enter the width : ");
	scanf("%f",&fValue1);
	
	printf("Enter the height : ");
	scanf("%f",&fValue2);
	
	dRet = RectArea(fValue1, fValue2);
	
	printf("Area of Rectangle is : %f",dRet);
	
	return 0;
}
