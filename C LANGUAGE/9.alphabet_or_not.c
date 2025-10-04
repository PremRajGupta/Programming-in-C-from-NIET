// Write a program in C to check whether a character is an alphabet or not

#include <stdio.h>
#include <conio.h>

int main()
{
    char character;
    printf("Enter one char/number=");
    scanf("%s", &character);

    char letter = character;
    if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))
        printf("%c is Character", letter);
    else
        printf("%c is Not a Character", letter);

    return 0;
}