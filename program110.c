// Write a program to display a following pattern
// Input = Rows - 3 Colunm - 4
// Output = 1 2 3 4
//          1 * * 4 
//          1 2 3 4 

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;

    int No = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iColumn ; j++)
        {
            if((i > 1 && i < 3) && (j > 1 && j < 4))
                printf("* "); 
            else
                printf("%d ",j);

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