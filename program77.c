// Write a program to display the index of first occerence of given number in an array
// Input - Arr = 55 32 57 85 10 98 36 73 60
//         iNo = 57
//         Output = 2


#include<stdio.h>

void Display(int iNo, int iArr[], int search)
{
    int i = 0;

    for(i = 0; i < iNo; i++)
    {
        if(iArr[i] == search)
        {
            printf("The number is at index %d",i);
        }
    }
}

int main()
{
    int iValue = 0, iSearch = 0, i = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&iValue);

    int Arr[iValue];

    printf("Enter the elements of array : ");
    for(i = 0; i < iValue; i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("Enter the number to be search : ");
    scanf("%d",&iSearch);

    Display(iValue, Arr, iSearch);

    return 0;
}