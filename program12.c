// Write a program which accept one number from user and print factors of that number
// Input = 24
// Output = 1 2 3 4 6 8 12 24

#include<stdio.h>

void DisplayFactor(int iNo)
{
	int i = 0;
	
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	
	for(i = 1; i<=iNo; i++)
	{
		if((iNo % i) == 0)
		{
			printf("%d ",i);
		}
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	DisplayFactor(iValue);
	
	return 0;
}
