#include<stdio.h>

// Function definition
void Fun()
{
	printf("Inside Function\n");
}

int main()
{
	Fun();		// function call
	
	void (*fptr)();
	// fptr is a pointer
	// that points to the function
    // that function accepts nothing
    // and the function returns nothing
	
	fptr = Fun;
	
	fptr();
	
	return 0;
}
