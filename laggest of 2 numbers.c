#include<stdio.h>

int main()
{
	int x = 0;
	int y = 0;
	
	printf("Enter 1st Number : ");
	scanf("%d",&x);
	printf("Enter 2st Number : ");
	scanf("%d",&y);
	
	if(x>y)
	{
		printf("%d is Greater than %d",x,y);
	}
	else
	{
		printf("%d is Greater than %d",y,x);
	}
	
	return 0;
}
