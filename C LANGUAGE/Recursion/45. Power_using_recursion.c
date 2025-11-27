// Write a program in C to calculate the power using recursion.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int power(int b, int p)
{
    if (p == 0)
        return 1;
    else
        return b * power(p, p - 1);
}

int main()
{
    int base, powerr;
    printf("Enter Base Number=");
    scanf("%d", &base);
    printf("Enter Power Valuse: ");
    scanf("%d", &powerr);

    printf("Power=%d", power(base, powerr));
    return 0;
}