// Write a program to check weater the given character is Capital or not
// Input = X            i
// Output = true      false

#include<stdio.h>

void CheckCapt(char aChar)
{

    int iNo = (int)(aChar);

    if(iNo >= 65 && iNo <= 90)
    {
        printf("True");
    }
    else if(iNo >= 97 && iNo <= 122)
    {
        printf("False");
    }
    else
    {
        printf("It is not a Character");
    }

    

}

int main()
{
    char Alpha = 0;

    printf("Enter the Character : ");
    scanf("%c",&Alpha);

    CheckCapt(Alpha);

    return 0;
}