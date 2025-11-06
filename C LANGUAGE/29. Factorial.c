// Write a program in C to find factorial of a number.

#include <stdio.h>
#include <conio.h>
int fact(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num = 0;
    printf("Enter a Number for Factorial=");
    scanf("%d", &num);
    printf("Factorial =%d", fact(num));
    return 0;
}