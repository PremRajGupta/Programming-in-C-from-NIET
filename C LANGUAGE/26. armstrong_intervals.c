// Write a program in C to display Armstrong number between two intervals
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int start, end, num = 0, temp, n, rem, result;
    printf("Enter Start Number=");
    scanf("%d", &start);
    printf("Enter End of Number=");
    scanf("%d", &end);
    for (num = start; num <= end; num++)
    {
        temp = num;
        n = 0;
        result = 0;
        while (temp != 0)
        {
            temp /= 10;
            n++;
        }
        temp = num;
        while (temp != 0)
        {
            rem = temp % 10;
            result += pow(rem, n);
            temp /= 10;
        }
        if (result == num)
            printf("%d ", num);
    }
}