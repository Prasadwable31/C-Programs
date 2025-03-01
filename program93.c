// Write a program to display following pattern.
// Input = row - 3 column - 4
// Output = 4 3 2 1
//          4 3 2 1 
//          4 3 2 1 

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;

    int No = 0;
    
    for(i = 1; i <= iRow; i++)
    {
        No = iColumn;
        
        for(j = 1; j <= iColumn; j++)
        {
            printf("%d ",No);
            No--;
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

    Pattern(row, column);

    return 0;
}