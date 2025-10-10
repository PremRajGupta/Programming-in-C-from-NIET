// Write a program in C to find factorial of a number
#include <stdio.h>
#include <conio.h>

int main()
{
    int fact = 1;
    int n;
    printf("Enter Number=");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("Factorial of = %d", fact);
    return 0;
}