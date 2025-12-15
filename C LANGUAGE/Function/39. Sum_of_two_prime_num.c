// Write a program in C to check whether a number can be expressed as sum of two prime numbers

#include <stdio.h>
#include <conio.h>

int prime(int n);
int main()
{
    int num, found = 0, i;
    printf("Enter Start Number: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        if (prime(i) && prime(num - i))
        {
            printf("%d = %d + %d\n", num, i, num - i);
            found = 1;
        }
    }
    if (found == 0)
        printf("Cannot be found any prime numebr");
}

int prime(int n1)
{
    int i;
    if (n1 <= 1)
    {
        return 0;
    }
    for (i = 2; i <= n1 / 2; i++)
    {
        if (n1 % i == 0)
            return 0;
    }
    return 1;
}