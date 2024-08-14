#include<stdio.h>

//No1 is a integer which is define external to htis file
extern int No1;

//No1 is a integer which is define external to htis file
extern int No2;


// Function Decleration 
// Demo is a function which accepts nothing and 
// which return nothing is external to this file
extern void Demo();

int main()
{
	Demo();  // Function Call
	
	printf("Valude of No1 : %d",No1);
	printf("Valude of No2 : %d",No2);

	return 0;
}
