// Write a program in C to calculate the sum of natural numbers.

#include <stdio.h>
#include <conio.h>

int main()
{
    int n, sum = 0;
    printf("Enter nth number=");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("sum of natural number=%d", sum);
    return 0;
}