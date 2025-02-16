// Write a program to display the frequency of given number in an array.
// 	Input:  Arr =  55	    30	11	85	10	98	11	73	60
// 		iNo = 98
// 	Output:   1

#include<stdio.h>

int Display(int iNo, int iArr[], int iSearch)
{
    int i = 0, Count = 0;

    for(i = 0; i < iNo; i++)
    {
        if (iArr[i] == iSearch)
        {
            Count += 1;
        }
    }

        return Count;
}

int main()
{
    int No = 0, i = 0, search = 0, iRet = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&No);

    int Arr[No];

    printf("Enter the elements of array : ");
    for (i = 0; i < No; i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("Enter the number for frequency : ");
    scanf("%d",&search);

    iRet = Display(No, Arr, search);

    printf("Frequency of %d in array : %d",search,iRet);

    return 0;
}