// Write a C program that performs grade calculation for multiple students.
#include <stdio.h>
#include <conio.h>
int main()
{
    int marks[10], n, i;
    char grade;

    printf("Enter Number of Student=");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\n Enter %d Student Total Marks=", i + 1);
        scanf("%d", &marks[i]);
    }
    // output
    for (i = 0; i < n; i++)
    {
        if (marks[i] >= 90)
            grade = 'A';
        else if (marks[i] >= 80)
            grade = 'B';
        else if (marks[i] >= 70)
            grade = 'C';
        else if (marks[i] >= 60)
            grade = 'D';
        else if (marks[i] >= 50)
            grade = 'E';
        else
        {
            grade = 'F';
            printf("\nGrade F mins Fail");
        }

        printf("\nStudent %d Grade: %c\n", i + 1, grade);
    }
    return 0;
}