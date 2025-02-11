// Write a program to display the difference between Summation of Odd and Summation of even elements of array.
// Input :  Arr =  10 	11	12	13	14	15	16	17	18
// Output:	  14	(70 -  56)


#include<stdio.h>

int ArrDiff(int iNo ,int iArr[])
{
    int i = 0, even = 0, odd = 0, Diff = 0;

    for(i = 0; i < iNo; i++)
    {
        if ((iArr[i] % 2) == 0)
        {
            even = even + iArr[i];
        }
        else
        {
            odd = odd + iArr[i];
        }
    }
        Diff = even - odd;
        return Diff;
}

int main()
{
    int Value = 0, iRet = 0, iCnt = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&Value);

    int Arr[Value];

    printf("Enter the elements of array : ");
    for (iCnt = 0; iCnt < Value; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    iRet = ArrDiff(Value, Arr);

    printf("\nDifference between even & odd is : %d",iRet);

    return 0;
}