// Accept one character form user and check whether that character is vowel (a,e,i,o,u) or not

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cNo)
{
	
	cNo = toupper(cNo);			// This is an inbuilt function which convert the character to UPPER_CASE
	
	if(cNo == 'A' || cNo == 'E' || cNo == 'I' || cNo == 'O' || cNo == 'U')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter the character : ");
	scanf("%c",&cValue);
	
	bRet = ChkVowel(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is Vowel");
	}
	else
	{
		printf("It is not Vowel");
	}
	
	return 0;
}
