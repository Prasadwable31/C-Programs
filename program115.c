// Write a program to to display the exam time by taking class division as input
// Input = A
// Output = Your Exam time is 7:30 A.M
// Input = B
// Output = Your Exam time is 8:00 A.M
// Input = C
// Output = Your Exam time is 8:30 A.M
// Input = D
// Output = Your Exam time is 9:00 A.M
// Input = default
// Output = Enter valid division

#include<stdio.h>

void displayExamTime(char div) 
{
    switch (div) 
    {
        case 'A':
            printf("Your Exam time is 7:30 A.M\n");
            break;
        case 'B':
            printf("Your Exam time is 8:00 A.M\n");
            break;
        case 'C':
            printf("Your Exam time is 8:30 A.M\n");
            break;
        case 'D':
            printf("Your Exam time is 9:00 A.M\n");
            break;
         case 'E':
            printf("Your Exam time is 9:30 A.M\n");
            break;
        case 'F':
            printf("Your Exam time is 10:00 A.M\n");
            break;
        case 'G':
            printf("Your Exam time is 10:30 A.M\n");
            break;
        case 'H':
            printf("Your Exam time is 11:00 A.M\n");
            break;
         case 'I':
            printf("Your Exam time is 11:30 A.M\n");
            break;
        case 'J':
            printf("Your Exam time is 12:00 A.M\n");
            break;
        case 'K':
            printf("Your Exam time is 12:30 P.M\n");
            break;
        case 'L':
            printf("Your Exam time is 1:00 P.M\n");
            break;
        case 'M':
            printf("Your Exam time is 1:30 P.M\n");
            break;
        case 'N':
            printf("Your Exam time is 2:00 P.M\n");
            break;
        case 'O':
            printf("Your Exam time is 2:30 P.M\n");
            break;
        case 'P':
            printf("Your Exam time is 3:00 P.M\n");
            break;
         case 'Q':
            printf("Your Exam time is 3:30 P.M\n");
            break;
        case 'R':
            printf("Your Exam time is 4:00 P.M\n");
            break;
        case 'S':
            printf("Your Exam time is 4:30 P.M\n");
            break;
        case 'T':
            printf("Your Exam time is 5:00 P.M\n");
            break;
         case 'U':
            printf("Your Exam time is 5:30 P.M\n");
            break;
        case 'V':
            printf("Your Exam time is 6:00 P.M\n");
            break;
        case 'W':
            printf("Your Exam time is 6:30 P.M\n");
            break;
        case 'X':
            printf("Your Exam time is 7:00 P.M\n");
            break;
             case 'Y':
            printf("Your Exam time is 7:30 P.M\n");
            break;
        case 'Z':
            printf("Your Exam time is 8:00 P.M\n");
            break;
        default:
            printf("Enter valid division\n");
    }
}

int main()
{
    char A = '\0';

    printf("Enter the Character : ");
    scanf("%c",&A);

    displayExamTime(A);

    return 0;
}