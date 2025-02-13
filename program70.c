// Write a program to display the elements of array which are divisible by 11.
// 	Input:  Arr =  55 33 54	85	15	98	36	73	60
// 	Output: 55	33


#include<stdio.h>

void Divisible(int iNo, int iArr[])
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        if(iArr[iCnt] % 11 == 0)
        {
            printf("%d ",iArr[iCnt]);
        }
    }
    
}

int main()
{
    int Value = 0, i = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&Value);

    int Arr[Value];

    printf("Enter the elements of array : ");
    for (i = 0; i < Value; i++)
    {
        scanf("%d",&Arr[i]);
    }
    
    Divisible(Value, Arr);

    return 0;
}