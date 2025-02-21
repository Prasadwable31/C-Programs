// Write a program to display smallest element of an array
// Input - Arr = 55 30 54 85 10 98 36 73 60
//         Output = 10


#include<stdio.h>

int SmallestDisplay(int iNo, int iArr[])
{
    int i = 1;

    int Min = 0;

    Min = iArr[0];

    while(i < iNo)
    {
        if(iArr[i] < Min)
        {
            Min = iArr[i];
        }
            i++;
    }

    return Min;
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

    int iRet = SmallestDisplay(iValue, Arr);

    printf("The Smallest element from an array is %d",iRet);

    return 0;
}
