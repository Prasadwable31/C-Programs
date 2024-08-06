#include<stdio.h>

int i, a[99], size ,ele, pos;

void create()
{
	printf("Enter the array elements : \n");
	for(i = 0; i<size; i++)
	{
		scanf("%d",&a[i]);
	}
}

void Display()
{
	printf("array elements are : \n");
	for(i = 0; i<size; i++)
	{
		printf("%d",a[i]);
	}
}

void insert()
{
	pritf("Enter the insertion positon :");
	scanf("%d",&pos);
	
	printf("Enter the New element");
	scanf("%d",&ele);
	
	for(i=size-1; i>=pos; i--)
	{
		a[i+1] = a[i];
	}
	size++;
}

void Delet()
{
	printf("Enter the deletion position : ");
	scanf("%d",&pos);
	
	for(i = pos; i<size; i++)
	{
		a[i] = a[i+1];
	}
	size--;
}

int main()
{
	printf("Enter the size of array");
	scanf("%d",&size);
	
	char ch;
	
	while(1)
	{
		printf("Enter the choice : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: 
					create();
					break;
			case 2: 
					Display();
					break;
			case 3: 
					insert();
					break;
			case 4: 
					Delet();
					break;
			case 5:
				//exit(0);
				break;
			default:
				printf("Invalid Chioce\n");
		}
	}
}
