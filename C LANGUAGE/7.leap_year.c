// Write a program in C to check leap year. Evaluate all the cases

#include <stdio.h>
#include <conio.h>

int main()
{
    int year;
    printf("Enter Year=");
    scanf("%d", &year);
    if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
        printf("This is Leap year");
    else
        printf("This is Not leap year");

    return 0;
}