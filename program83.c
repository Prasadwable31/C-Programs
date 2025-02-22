// Write a program to display the diference between largest and smallest element of an array
// Input - Arr = 55 30 54 85 10 98 36 73 60
//         Output = 98-10 = 88


#include<stdio.h>

int Difference(int iNo, int iArr[])
{
    int i = 1;

    int Min = 0, Max = 0;

    Min = iArr[0];
    Max = iArr[0];

    while(i < iNo)
    {
        if(iArr[i] > Max)
        {
            Max = iArr[i];
        }

        if(iArr[i] < Min)
        {
            Min = iArr[i];
        }
            i++;
    }

    return Max - Min;
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

    int iRet = Difference(iValue, Arr);

    printf("The difference between largest and smallest element from an array is %d",iRet);

    return 0;
}
