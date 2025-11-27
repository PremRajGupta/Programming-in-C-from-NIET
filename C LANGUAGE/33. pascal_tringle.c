// Write a program in C to display Pascal triangle.
#include <stdio.h>

int main()
{
    int i, j, num = 1, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
                num = 1;
            else
                num = num * (i - j + 1) / j;
        }
        printf("\n");
    }
}