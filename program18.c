// Write a program which accept number from user and display all its non factors
// Input = 12
// Output =  5 7 8 9 10 11

#include<stdio.h>

void NonFact(int iNo)
{
	int i = 0;
	
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	
	for(i = 1; i<iNo; i++)
	{
		if((iNo % i) != 0)
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
	
	NonFact(iValue);
	
	return 0;
}
