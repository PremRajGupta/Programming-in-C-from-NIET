// Write a program in C to find factorial of a number using recursion.
#include <stdio.h>
#include <conio.h>

int fact(int N)
{
    if (N == 0 || N == 1)
        return 1;
    else
        return N * fact(N - 1);
}

int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Factorial=%d", fact(num));
    return 0;
}