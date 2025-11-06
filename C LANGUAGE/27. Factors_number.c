// Write a program in C to display factors of a number

#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("Enter Number=");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            printf("%d ", i);
    }
    return 0;
}