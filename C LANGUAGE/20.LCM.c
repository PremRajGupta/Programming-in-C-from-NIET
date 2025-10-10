// Write a program in C to find LCM of two numbers
#include <stdio.h>
#include <conio.h>

int main()
{
    int n1, n2;
    printf("Enter Two Number for LCM=");
    scanf("%d%d", &n1, &n2);
    int l = 1;
    for (l; l <= n1 * n2; l++)
    {
        if (l % n1 == 0 && l % n2 == 0)
            break;
    }
    printf("LCM of two number=%d", l);
    return 0;
}