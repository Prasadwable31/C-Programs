#include<stdio.h>

int main()
{
	
	int Arr[4] = {10,20};

	printf("%d\n",Arr[0]);		//10
	printf("%d\n",Arr[1]);		//20
	printf("%d\n",Arr[2]);		//0 = if we given the size else it can store garbage
	printf("%d\n\n",Arr[3]);	//0
	
	
	int Brr[4];
	Brr[0] = 10;
	Brr[1] = 20;
	
	printf("%d\n",Brr[0]);		//10
	printf("%d\n",Brr[1]);		//20
	printf("%d\n",Brr[2]);		//Garbage = = if we given the size else it can store garbage
	printf("%d\n",Brr[3]);		//Garbage

	return 0;
}
