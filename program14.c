// Accept one character from user and convert case of that character
// Input = a 
// Output = A

#include<stdio.h>

int DisplayConvert(char cValue)
{
	
	if(cValue >= 'A' && cValue <= 'Z')
	{
		printf("%c",tolower(cValue));
	}
	else if(cValue >= 'a' && cValue <= 'z')
	{
		printf("%c",toupper(cValue));
	}
	else
	{
		printf("Invalid Character...!");
	}
}

int main()
{
	char cValue = '\0';
	
	printf("Enter the character : ");
	scanf("%c",&cValue);
	
	DisplayConvert(cValue);
	
	return 0;
}
