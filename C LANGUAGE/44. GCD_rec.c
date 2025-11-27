// Write a program in C to find GCD using recursion.

#include <stdio.h>
#include <conio.h>

int gcd(int n1, int n2)
{
    int i, gcd;
    if (n1 == 0 && n2 == 0)
        return 0;
    else
    {
        for (i = 1; i <= n1 && i <= n2; i++)
        {
            if (n1 % i == 0 && n2 % i == 0)
                gcd = i;
        }
    }
    return gcd;
}

int main()
{
    int num1, num2;
    printf("Enter two number=");
    scanf("%d%d", &num1, &num2);
    printf("GCD=%d", gcd(num1, num2));
    return 0;
}