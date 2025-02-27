// Write a program to display following pattern.
// Input = 5
// Output = # 1 * # 2 * # 3 * # 4 * # 5 *

#include<stdio.h>

void Pattern(int num)
{
    int i = 0;

    for(i = 1; i <= num; i++)
    {
        printf("# ");
        printf("%d ",i);
        printf("* ");
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