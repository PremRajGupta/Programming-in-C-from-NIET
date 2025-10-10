// Write a program in C to generate multiplication table.

#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i = 1;
    printf("Enter Number=");
    scanf("%d", &n);
    while (i <= 10)
    {
        printf("%d x %d=%d\n", n, i, n * i);
        i++;
    }
    return 0;
}