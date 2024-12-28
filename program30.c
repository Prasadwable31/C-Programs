// Write a program which accept total marks & obtained marks from user and calculate percentage

#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
	if(iNo1 <= 0 || iNo2 <= 0)
	{
		printf("Please enter valid marks...!\n");
	}
	else
	{
		float Ans = 0.0;
		
		Ans = ((float)iNo2 / iNo1) * 100;
		
		return Ans;
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	float fRet  = 0.0f;
	
	printf("Please enter total marks : ");
	scanf("%d",&iValue1);
	
	printf("Please enter obtained marks : ");
	scanf("%d",&iValue2);
	
	fRet = Percentage(iValue1, iValue2);
	
	printf("%f",fRet);
	
	return 0;
}
