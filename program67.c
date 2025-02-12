// Write a program to display the elements of array which are divisible by 5.
// Input:  Arr =  55		32	54	85	15	98	36	73	60
// Output: 55	85	15	60


#include<stdio.h>

void Divisible(int iNo, int iArr[])
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        if ((iArr[iCnt] % 5) == 0)
        {
            printf("%d ",iArr[iCnt]);
        }   
    }
}

int main()
{
    int iCount = 0, i = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&iCount);

    int Arr[iCount];

    printf("Enter the elements of array : ");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Arr[i]);
    }

    Divisible(iCount, Arr);

    return 0;
}