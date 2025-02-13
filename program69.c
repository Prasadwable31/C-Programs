// Write a program to display the elements of array which are divisible by 3 and 5.
// Input:  Arr =  55 30 15	85	10	98	36	73	60
// Output:   30 15	60

#include<stdio.h>

void Divisible(int iNo, int iArr[])
{
    int i = 0;

    for (i = 0; i < iNo; i++)
    {
        if ((iArr[i] % 3) == 0 && (iArr[i] % 5) == 0)
        {
            printf("%d ",iArr[i]);
        }
    }
}

int main()
{
    int no = 0, i = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&no);

    int Arr[no];

    printf("Enter the elements of array : ");
    for (i = 0; i < no; i++)
    {
        scanf("%d",&Arr[i]);
    }

    Divisible(no, Arr);
    
    return 0;
}