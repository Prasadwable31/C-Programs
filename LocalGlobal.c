#include<stdio.h>

int X = 10;    // Golbal Variable (Data)   //Sun light

void Demo()
{
	int B = 30;    // Local Variable (Stack)    //Bulb
	
	printf("Value of A from Demo: %d\n",B);
	printf("Value of X from Demo: %d\n",X);
	
    //printf("%d",A);    //Not Allowed
}

int main()
{
	int A = 20;       // Local Variable (Stack)   //Bulb
	
	printf("Value of A from main: %d\n",A);
	printf("Value of X from main: %d\n",X);
	
	//printf("%d",B);    //Not Allowed
	
	Demo();     // Function call
	
	return 0;
}
