// Write a program in C to reverse a number using looping concepts.
#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("Enter Number=");
    scanf("%d", &num);
    printf("Before Reverse of Number=%d", num);

    int digit = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        digit = digit * 10 + rem;
        num /= 10;
    }
    printf("Reverse Number is =%d", digit);
    return 0;
}
