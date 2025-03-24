// Write a program to check weater the given character is alphabet or not
// Input = X            @
// Output = alphabet    not alphabet

#include<stdio.h>

void CheckAlpha(char aChar)
{

    int iNo = (int)(aChar);
    // printf("%d",iNo);

    if(iNo >= 91 && iNo <= 96)
    {
        printf("%c is not alphabet",aChar);
    }
    else if(iNo >= 65 && iNo <= 122)
    {
        printf("%c is alphabet",aChar);
    }
    else
    {
        printf("%c is not alphabet",aChar);
    }

}

int main()
{
    char Alpha = 0;

    printf("Enter the Character : ");
    scanf("%c",&Alpha);

    CheckAlpha(Alpha);

    return 0;
}