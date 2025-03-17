// Write a program to display a following pattern
// Input = Rows - 3 Colunm - 4
// Output = 1 2 3 4 
//          2 3 4 5 
//          1 2 3 4 

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;

    int No = 0;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 1)
        {
            No = 1;
        }       
        else
        {
            No = 2;
        }

        for(j = 1; j <= iColumn; j++)
        {

            printf("%d ",No);
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

    printf("Enter the number of colunms : ");
    scanf("%d",&column);

    Pattern(row, column);

    return 0;
}