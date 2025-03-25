// Write a program to check weater the given character is Digit or not
// Input = 9            i
// Output = true      false

#include<stdio.h>

void Check(char aChar)
{

    int iNo = (int)(aChar);
    // printf("%d",iNo);

    if(iNo >= 48 && iNo <= 57)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

int main()
{
    char Digit = 0;

    printf("Enter the Digit : ");
    scanf("%c",&Digit);

    Check(Digit);

    return 0;
}