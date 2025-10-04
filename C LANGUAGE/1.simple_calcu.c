// Write a C program that simulates a simple calculator capable of performing basic arithmetic operations

#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    int a, b;

    printf("Enter Your choice (+,-,*,/)=");
    scanf("%s", &ch);

    printf("Enter two number=");
    scanf("%d%d", &a, &b);

    if (ch == '+')
    {
        printf("Sum of %d + %d=%d", a, b, a + b);
    }
    else if (ch == '-')
    {
        printf("Subtract of %d - %d=%d", a, b, a - b);
    }
    else if (ch == '*')
        printf("Multiple of %d * %d=%d", a, b, a * b);
    else if (ch == '/')
        printf("Divide of %d / %d=%d", a, b, a / b);
    else
        printf("Invalid Character try again");

    return 0;
}