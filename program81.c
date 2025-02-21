// Write a program to display largest element of an array
// Input - Arr = 55 30 54 85 10 98 36 73 60
//         Output = 98


#include<stdio.h>

int largestDisplay(int iNo, int iArr[])
{
    int i = 1;

    int MaxNum = 0;

    MaxNum = iArr[0];

    while(i < iNo)
    {
        if(iArr[i] > MaxNum)
        {
            MaxNum = iArr[i];
        }
            i++;
    }

    return MaxNum;
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

    int iRet = largestDisplay(iValue, Arr);

    printf("The largest element from an array is %d",iRet);

    return 0;
}