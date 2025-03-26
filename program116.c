// Write a program to display ascii table


#include<stdio.h>

void AsciiTable()
{
    int i = 0;

    for(i = 1; i <= 128; i++)
    {
        printf("%d  :  %c \n",i,i);
    }

}

int main()
{
   AsciiTable();

    return 0;
}