#include<stdio.h>

int a[99], i, size, pos, ele;
	
void Display()
{
	printf("Array elements are :\n");
	for(i = 0; i<size; i++)
	{
		printf("%d\t",a[i]);
	}
}

void insert()
{
	printf("\nEnter the insertion position : ");
	scanf("%d",&pos);
	
	printf("\nEnter the New Element : ");
	scanf("%d",&ele);
	
	for(i = size-1; i>=pos; i--)
	{
		a[i+1] = a[i];
	}
	a[pos] = ele;
	
	size++;
	Display();
}

void Delet()
{
	printf("\nEnter the deletion position : ");
	scanf("%d",&pos);
	
	for(i=pos; i<size; i++)
	{
		a[i] = a[i+1];
	}
	size--;
	Display();
}

int main()
{	
	printf("Enter the size of array : ");
	scanf("%d",&size);
	
	printf("Enter the element of array :\n");
	for(i = 0; i<size; i++)
	{
		scanf("%d",&a[i]);
	}
	
	Display();
	insert();
	Delet();
	
	return 0;
}
