// Write a program to display the sum of digit of every element of an array
// Input - Arr = 55 30 54 85 10 985 36 73 60
//         Output = 10 3 9 13 1 22 9 10 6


#include<stdio.h>

void DisplaySum(int iNo, int iArr[])
{
    int i = 0, sum;

    // printf("3 digit Elements are :\n");
    for(i = 0; i < iNo; i++)
    {
        sum = 0;
        while(iArr[i] != 0)
        {
            int rem = iArr[i] %  10;
            sum = sum + rem;
            iArr[i] = iArr[i] / 10;
        }

        printf("%d  ",sum);
    }
}

int main()
{
    int iValue = 0, i = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&iValue);

    int Arr[iValue];

    printf("Enter the elements of array : ");
    for(i = 0; i < iValue; i++)
    {
        scanf("%d",&Arr[i]);
    }

    DisplaySum(iValue, Arr);

    return 0;
}
