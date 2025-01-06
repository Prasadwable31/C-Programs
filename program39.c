// Write a program which accept number from user and display its table
// Input = 2
// Output = 2 4 6 8 10 12 14 16 18 20

#include<stdio.h>

void Table(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int i = 0;
	int Multi = 0;
	
	for(i = 1; i<=10; i++)
	{
//		Multi = Multi + iNo;
		
		Multi = iNo * i;
		
		printf("%d ",Multi);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	Table(iValue);
	
	return 0;
}
