// Accept one number form user and print that number of * on screen

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		printf("*");
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	Display(iValue);
	
    return 0;
}
