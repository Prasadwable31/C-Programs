// Write a program to display the difference between frequency of even and odd elements of an array.
// 	Input:  Arr =  55		32	57	85	15	98	36	73	60
// 	Output: 1	(5 – 4)


#include<stdio.h>

int Display(int iNo, int iArr[])
{
    int i = 0, Value1 = 0, Value2 = 0;

    for(i = 0; i < iNo; i++)
    {
        if ((iArr[i] / 2) * 2 == iArr[i])   
        {
            Value1++;
        }
        else
        {
            Value2++;
        }
    }
        return Value1 - Value2;
}

int main()
{
    int No = 0, i = 0, iRet = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&No);

    int Arr[No];

    printf("Enter the elements of array : ");
    for (i = 0; i < No; i++)
    {
        scanf("%d",&Arr[i]);
    }

    iRet = Display(No, Arr);

    printf("Frequency of even and odd elements are : %d",iRet);

    return 0;
}