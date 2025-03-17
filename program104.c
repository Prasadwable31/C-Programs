// Write a program to display a following pattern
// Input = Rows - 3 Colunm - 4
// Output = 1 2 3 4 
//          -1 -2 -3 -4 
//          1 2 3 4 

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;

    int No = 0;

    for(i = 1; i <= iRow; i++)
    {
        No = 0;

        for(j = 1; j <= iColumn; j++)
        {

            if(i % 2 == 1)
            {
                No++;
                printf("%d ",No);
            }
            else
            {
                No--;
                printf("%d ",No);
            }

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