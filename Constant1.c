#include<stdio.h>

const int no1 = 10;
const int no2;

int main()
{
	const int no3 = 10;
	const int no4;
	
	no3 = 11;	// NA
	no2 = 11;	// NA 
	
	return 0;
}
