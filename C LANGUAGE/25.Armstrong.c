// Write a program in C to check Armstrong number.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter digit of number=");
    scanf("%d", &num);
    int c = 0, rem, result = 0;

    // int original_num = num;
    int temp = num;

    while (temp != 0)
    {
        temp = temp / 10;
        c++;
    }
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        result = result + (pow(rem, c));
        temp /= 10;
    }
    if (num == result)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}