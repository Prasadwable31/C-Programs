#include<stdio.h>

int main()
{
	extern int A;
	int B = 0;
	register int C = 10;
	auto int D;
	auto int E = 0;
	
	
	printf("%d",C);
	
	return 0;
}
