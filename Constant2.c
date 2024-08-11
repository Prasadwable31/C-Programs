#include<stdio.h>

int main()
{
	
	int Arr[3] = {10,20,30};
	
	const int Brr[3] = {10,20,30};

	Arr[1] = 21;
	Brr[1] = 21;
	
	Arr[2]++;
	Brr[2]++;
		
	return 0;
}
