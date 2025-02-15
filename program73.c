// Write a program to check whether array consists of 11.
// 	Input:  Arr =  55		30	54	85	10	98	36	73	60
// 	Output:  Absent

#include<stdio.h>

void Display(int iNo, int iArr[])
{
    int i = 0, Count = 0;

    for (i = 0; i < iNo; i++)
    {
        if (iArr[i] == 11)
        {
            Count++;
        }
    }

    if (Count != 0)
    {
        printf("Present");
    }
    else
    {
        printf("Absent");
    }
    
    
}

int main()
{
    int No = 0, i = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&No);

    int Arr[No];

    printf("Enter the elements of array : ");
    for (i = 0; i < No; i++)
    {
        scanf("%d",&Arr[i]);
    }

    Display(No, Arr);

    return 0;
}