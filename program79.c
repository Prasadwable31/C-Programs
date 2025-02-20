// Write a program to display the element of an array within specified range
// Input - Arr = 55 32 57 85 57 98 36 73 60
//         Start = 2        End = 5
//         Output = 57 85 57 98


#include<stdio.h>

void Display(int iNo, int iArr[], int iStart, int iEnd)
{
    int i = 0;
    
    printf("The Array within specified range is : ");
    for(i = iStart; i <=iEnd; i++)
    {
        printf("%d",iArr[i]);
    }
}

int main()
{
    int iValue = 0, i = 0, iNo1 = 0, iNo2 = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&iValue);

    int Arr[iValue];

    printf("Enter the elements of array : ");
    for(i = 0; i < iValue; i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("Enter the Start index of array : ");
    scanf("%d",&iNo1);

    printf("Enter the End index of array : ");
    scanf("%d",&iNo2);

    Display(iValue, Arr, iNo1, iNo2);

    return 0;
}