// Write a program to check weather array consist of given number by user.
// Input - Arr = 55 30 54 85 10 98 36 73 60
//         iNo = 36
//         Output = Present

#include<stdio.h>

void Display(int iNo, int iArr[], int iSearch)
{
    int i = 0, Flag = 0;

    for(i = 0; i < iNo; i++)
    {
        if(iArr[i] == iSearch)
        {
            Flag = 1;
        }
    }

    if(Flag == 1)
    {
        printf("Present\n");
    }
    else
    {
        printf("Absent\n");
    }

}

int main()
{
    int iValue = 0, i = 0, search = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&iValue);

    int Arr[iValue];

    printf("Enter the elements of an array : ");
    
    for(i = 0; i < iValue; i++)
    {
        scanf("%d",&Arr[i]);
    }
    
    printf("Enter the number to search : ");
    scanf("%d",&search);

    Display(iValue, Arr, search);

    return 0;
}