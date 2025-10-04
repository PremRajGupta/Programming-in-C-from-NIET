// Write a program in C to check whether a number is even or odd.

#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("Enter Number=");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("This is Even Number");
    else
        printf("This is Odd Number");

    return 0;
}