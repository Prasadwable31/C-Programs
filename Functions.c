#include<stdio.h>


//Function Definition = Where the actual memory get declare

int Multiplication(int No1, int No2)
{
	register int Ans = 0;
	Ans = No1 * No2;
	return Ans;
	
}  // End of Function Definition


int main()
{	
	int A = 10, B = 11;
	auto int Ret = 0;
		
	Ret = Multiplication(A,B);  				//Function call
	
	printf("Multiplication is : %d\n",Ret);  
	
	return 0;
}

// OS  -> main() -> Multiplication() -> main() -> OS
