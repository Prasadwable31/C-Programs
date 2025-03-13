// Write a program to display a pattern 
// Input  = Row - 3      Column - 4
// Output = 1 2 3 4
//          5 6 7 8  
//          9 10 11 12

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;

    int No = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iColumn; j++)
        {
           printf("%d   ",No);
           No++;
        }
            printf("\n");
    }


}

int main()
{

    int row = 0, column = 0;

    printf("Enter the number of rows : ");
    scanf("%d",&row);

    printf("Enter the number of columns : ");
    scanf("%d",&column);

    Pattern(row,column);

    return 0;
}