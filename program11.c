// Write a program which accept one number from user and print that number of even numbers on screen
// Input = 7
// Output = 2 4 6 8 10 12 14

#include<stdio.h>

void PrintEven(int iNo)
{
	if(iNo <= 0)
	{
		return;
	}
	
	int iCnt = 2;
	
	while(iNo > 0)
	{
		printf("%d ",iCnt);
		
		iCnt = iCnt + 2;				// Increment counter by 2
		
		iNo--;					// Decrement original value by 1
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	PrintEven(iValue);
	
	return 0;
}
