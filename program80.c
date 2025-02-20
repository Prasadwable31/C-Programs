// Write a program to display the product of odd elements in an array
// Input - Arr = 55 30 11 85 10 98 11 73 60
//         Output = 41294275


#include<stdio.h>

int OddDisplay(int iNo, int iArr[])
{
    int i = 0, Odd = 1;

    for(i = 0; i < iNo; i++)
    {
        if((iArr[i] % 2) != 0)
        {
            Odd = Odd * iArr[i];
        }
    }

    return Odd;
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

    int iRet = OddDisplay(iValue, Arr);

    printf("%d",iRet);

    return 0;
}