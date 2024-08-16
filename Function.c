#include<stdio.h>

int Addition(int iValue1,int iValue2)    // Dukan  // input argument
{
	auto int iOutput = 0;
	
	iOutput = iValue1 + iValue2;
	
	return iOutput;
}

int main()       // Ghar
{
	auto int iNo1 = 10;
	
	auto int iNo2 = 11;
	
	auto int iAns = 0;       // if we use auto without int then it will also execute our program
	
	iAns = Addition(iNo1,iNo2);      // Called function
	
	printf("Addition is: %d\n",iAns);
	
	return 0;

}
