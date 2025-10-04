// Write a program in C to check whether a number is positive or negative

#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("Enter Number=");
    scanf("%d", &num);

    if (num == 0)
        printf("This is Zero Number");
    else if (num > 0)
        printf("This is Positive Number");
    else
        printf("This is Negative Number");
}