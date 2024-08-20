#include<stdio.h>


//Initilised  global variable
int No1 = 11;

//Non Initilised  global variable
int No2;

//Initilised static global variable
static int A = 10;

//Non Initilised static global variable
static int B;

// Function Definition
void Demo()
{
	int X = 10;
	static int Y = 20;
	printf("Inside Demo\n");
}

/*Non Initilised global
 BSS : Block Starting with Symbol

 Initilised global
NON BSS : Block Starting with Value

*/
