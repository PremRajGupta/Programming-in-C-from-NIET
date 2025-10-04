// Write a program in C to check whether a character is a vowel or consonant.

#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    printf("Enter any letter: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("This is a Vowel: %c\n", ch);
    }
    else
    {
        printf("This is a Consonant: %c\n", ch);
    }

    return 0;
}