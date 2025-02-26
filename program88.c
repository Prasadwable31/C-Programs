// Write a program to display following pattern.
// Input = 5
// Output = 5 # 4 # 3 # 2 # 1 #

#include<stdio.h>

void Pattern(int num)
{
    int i = 0;

    for(i = num; i >= 1; i--)
    {
        printf("%d ",i);
        printf("# ");
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