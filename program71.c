// Write a program to display number of even elements in an array.
// Input :  Arr =  10 	11	12	13	14	15	16	17	18
// Output:  5

#include<stdio.h>

int Display(int iNo, int iArr[])
{
    int i = 0, Sum = 0;

    for(i = 0; i < iNo; i++)
    {
        if (iArr[i] % 2 == 0)
        {
            Sum++;
        }
    }
        return Sum;
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

    printf("Number of even elements in array : %d",iRet);

    return 0;
}