// Write a program in C to check whether a number is palindrome or not.

#include <stdio.h>
#include <conio.h>

// int main()
// {
//     int num;
//     printf("Enter a Digit Number=");
//     scanf("%d", &num);
//     int temp = num;
//     int rem, rev = 0;
//     while (num != 0)
//     {
//         rem = num % 10;
//         rev = rev * 10 + rem;
//         num /= 10;
//     }
//     if (temp == rev)
//         printf("It is Palindrome");
//     else
//         printf("Not a Palindrome");

//     return 0;
// }

// ! using function and result answer in Palindrome.
int palindro(int x)
{
    int rem, digit = 0;
    while (x != 0)
    {
        rem = x % 10;
        digit = digit * 10 + rem;
        x /= 10;
    }
    return digit;
}
int main()
{
    int num;
    printf("Enter Number for Palindrome=");
    scanf("%d", &num);
    int temp = num;
    int result = palindro(num);
    if (temp == result)
        printf("palindrome");
    else
        printf("Not Palindrome");
}