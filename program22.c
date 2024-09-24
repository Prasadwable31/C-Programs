// Write a program which accept number from user and display its factors in decreasing order
// Input = 12
// Output = 12 6 4 3 2 1

#include<stdio.h>

void FactRev(int iNo)
{
	
	if(iNo <= 0)
	{
		iNo = -iNo;
	}

	int i = iNo;
		
	while(i >= 1)
	{
		if((iNo % i) == 0)
		{
			printf("%d ",i);
		}
		i--;
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	FactRev(iValue);
	
	return 0;
}
