// Write a program in C to find the frequency of characters in a string.

#include <stdio.h>
#include <conio.h>

void frequency(char str[], char ch)
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            count++;
    }
    printf("frequency of character: %c = %d", ch, count);
}

int main()
{
    char str[20], ch;
    printf("Enter String word: ");
    // scanf("%s", &str); //output single word
    fgets(str, sizeof(str), stdin); // output multiple word

    printf("Enter your finding Characters: ");
    scanf("%c", &ch);
    frequency(str, ch);
    return 0;
}