// Write a program in C to display Fibonacci sequence.
#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 0, b = 1, c = 0, n, i = 1;
    printf("Enter Nth number=");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    return 0;
}