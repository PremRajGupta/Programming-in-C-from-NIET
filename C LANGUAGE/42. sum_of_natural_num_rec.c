// Write a program in C to find the sum of natural numbers using recursion.
#include <stdio.h>
#include <conio.h>

int rec(int N)
{
    if (N == 0 || N == 1)
        return 1;
    else
        return N + rec(N - 1);
}

int main()
{
    int num, result;
    printf("Enter Number=");
    scanf("%d", &num);

    result = rec(num);
    printf("Sum of Natural=%d", result);
    return 0;
}