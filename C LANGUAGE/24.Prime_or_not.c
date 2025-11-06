// Write a program in C to check whether a number is prime or not
#include <stdio.h>
#include <conio.h>

int main()
{
    int num, flag = 1;
    printf("Enter Single number=");
    scanf("%d", &num);

    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
            flag = 0;
    }
    if (flag)
        printf("It is Prime Number");
    else
        printf("It is Not Prime Number");

    return 0;
}