// Write a program to display the 3 digit element of an array
// Input - Arr = 55 30 54 85 10 985 36 73 60
//         Output = 985


#include<stdio.h>

void Display(int iNo, int iArr[])
{
    int i = 0;

    printf("3 digit Elements are :\n");
    for(i = 0; i < iNo; i++)
    {
        if(iArr[i] > 99 && iArr[i] < 1000)
        {
            printf("%d ",iArr[i]);
        }
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

    Display(iValue, Arr);

    return 0;
}
