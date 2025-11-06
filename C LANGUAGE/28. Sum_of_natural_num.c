// Write a program in C to calculate the sum of natural numbers
#include <stdio.h>
#include <conio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a Nth number=");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    printf("Sum of Number=%d", sum);
    return 0;
}