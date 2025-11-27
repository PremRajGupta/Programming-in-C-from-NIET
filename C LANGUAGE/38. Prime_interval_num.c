// Write a C program in C to display prime numbers between intervals using function.
#include <stdio.h>
#include <conio.h>
int isPrime(int num)
{
    int i;
    if (num <= 1)
        return 1;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int num;
    printf("Enter Number=");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (isPrime(i))
            printf("%d ", i);
    }
    return 0;
}