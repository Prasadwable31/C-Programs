// Write a program which accept number from user and display below pattern

#include<stdio.h>

void Pattern(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int i = 0, j = 0;
	
	for(i = 1; i <= iNo; i++)
	{
		printf("* ");

		if(i == iNo)
		{
			for(j = 1; j <= iNo; j++)	
			{
				printf("# ");
			}
		}
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}
