// Write a program in C to find sum of digit of number using recursion
#include <stdio.h>

int SumDigit(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10) + SumDigit(n / 10);
}

int main()
{
    int num;
    printf("Enter a digit number; ");
    scanf("%d", &num);

    printf("Sum of digit: %d", SumDigit(num));
}