// Write a program to display following pattern.
// Input = 5
// Output = 2 4 6 8 10

#include<stdio.h>

void Pattern(int num)
{
    int i = 0;
    int No = 0;

    for(i = 0; i < num; i++)
    {
        No = No + 2;
        printf("%d ",No);
    }

}

int main()
{
    int No = 0;

    printf("Enter the number : ");
    scanf("%d",&No);

    Pattern(No);

    return 0;
}