// Write a program to display the frequency of 11 in an array.
// 	Input:  Arr =  55	    30	11	85	10	98	11	73	60
// 	Output:   2


#include<stdio.h>

int Display(int iNo, int iArr[])
{
    int i = 0, Count = 0;

    for (i = 0; i < iNo; i++)
    {
        if (iArr[i] == 11)
        {
            Count++;
        }
    }

        return Count;
    
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

    printf("Frequency of 11 in array : %d",iRet);

    return 0;
}