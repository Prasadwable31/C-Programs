// Write a program to display a following pattern
// Input = Rows - 3 Colunm - 4
// Output = * * * #
//          * * # # 
//          * # # # 

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;

    int No = iRow;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iColumn ; j++)
        {

           if(j > No)
           {
                printf("# ");
           }
           else
           {
            printf("* ");
           }

        }
            No--;
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
