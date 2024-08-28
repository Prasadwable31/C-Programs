#include<stdio.h>

int A = 10;			// Global variable

void Fun()			// Function defination
{
	auto int B = 20;	
	register int D = 20;
	static int E = 20;
	
	B++;			// 21  // 21  // 21
	D++;			// 21  // 21  // 21
	E++;			// 21  // 22  // 23
	
	printf("Value of Auto variable : %d\n",B);      // New memory after every time that why it get fresh memory.
	printf("Value of register variable : %d\n",D);  // New memory after every time that why it get fresh memory.
	printf("Value of static variable : %d\n",E);	// Do not get New memory after every time that why it preserve the value
}

int main()
{
	int C = 30;
	
	printf("First function call\n");
	Fun();			// Function call
	
	printf("\nSecond function call\n");
	Fun();
	
	printf("\nThird function call\n");
	Fun();
	
	return 0;

}
