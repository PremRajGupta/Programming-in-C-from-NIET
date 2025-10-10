// Write a program in C to check whether a number is palindrome or not.

#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("Enter a Digit Number=");
    scanf("%d", &num);
    int temp = num;
    int rem, rev = 0;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if (temp == rev)
        printf("It is Palindrome%d", rev);
    else
        printf("Not a Palindrome%d", rev);

    return 0;
}