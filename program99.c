// Write a program to display a pattern 
// Input  = Row - 3      Column - 4
// Output = 3 3 3 3
//          2 2 2 2 
//          1 1 1 1

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;

    int No = iRow;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iColumn; j++)
        {
           printf("%d ",No);
        }
            printf("\n");
            No--;
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