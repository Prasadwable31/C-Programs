// Write a program to display a pattern 
// Input  = Row - 3      Column - 4
// Output = A B C D
//          a b c d
//          A B C D

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;

    int No = 65;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iColumn; j++)
        {
            printf("%c ",(char)No);
        }
            printf("\n");
            No++;
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