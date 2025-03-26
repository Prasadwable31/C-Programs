// Write a program to give compliment of alphabet

#include<stdio.h>
#include<ctype.h>

void Display(char Alpha)
{
    
    int iNo = (int)(Alpha);

    if(iNo >= 65 && iNo <= 90)
    {
        printf("Compliment is : %c",tolower(Alpha));

    }
    else if(iNo >= 97 && iNo <= 122)
    {
        printf("Compliment is : %c",toupper(Alpha));
    }
    else
    {
        printf("It is not a Character");
    }

}

int main()
{
    char A = '\0';

    printf("Enter the Character : ");
    scanf("%c",&A);
 
    Display(A);

    return 0;
}