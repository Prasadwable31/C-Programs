// WAP to take a number from user and display that number of characters starting from 'A'
// Input = 9
// Output = A B C D E F G H I

#include<stdio.h>

void Character(int num)
{
    if(num > 26)
    {
        num = 26;
    }

    int i = 0;

    for(i = 65; i < 65 + num; i++)
    {
        printf("%c ",(char)i);
    }
}

int main()
{
    int No = 0;

    printf("Enter the number : ");
    scanf("%d",&No);

    Character(No);

    return 0;
}
