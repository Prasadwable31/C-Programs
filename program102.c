// Write a program to display a following pattern
// Input = Rows - 3 Colunm - 4
// Output = 2 4 6 8 
//          1 3 5 7 
//          2 4 6 8 

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;

    int No = 0;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 1)
        {
            No = 2;
        }
        else
        {
            No = 1;
        }

        for(j = 1; j <= iColumn; j++)
        {

            printf("%d ",No);
            No = No + 2;

        }
            printf("\n");
    }

}

int main()
{
    int row = 0, column = 0;

    printf("Enter the number of rows : ");
    scanf("%d",&row);

    printf("Enter the number of colunms : ");
    scanf("%d",&column);

    Pattern(row, column);

    return 0;
}