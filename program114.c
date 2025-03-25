// Write a program to check weater the given character is Small or not
// Input = x            I
// Output = true      false

#include<stdio.h>

void CheckCapt(char aChar)
{

    int iNo = (int)(aChar);

    if(iNo >= 65 && iNo <= 90)
    {
        printf("False");
    }
    else if(iNo >= 97 && iNo <= 122)
    {
        printf("True");
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

    CheckCapt(A);

    return 0;
}