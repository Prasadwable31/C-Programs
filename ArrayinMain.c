#include<stdio.h>

int main()
{
	int size, i;
	
	printf("Enter the size of array : ");
	scanf("%d",&size);
	
	int Arr[size];
	
	printf("Enter the array elements : \n");
	for(i = 0; i<size; i++)
	{
		scanf("%d",&Arr[i]);
	}
	
	printf("Array elements are : \n");
	for(i = 0; i<size; i++)
	{
		printf("%d\t",Arr[i]);
	}
	
	return 0;
}
