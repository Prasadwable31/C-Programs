// Write a program to display a pattern 
// Input  = Row - 3      Column - 4
// Output = A B C D
//          A B C D
//          A B C D

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;

    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        ch = 'A';

        for(j = 1; j <= iColumn; j++)
        {
            printf("%c ",ch);
            ch++;
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