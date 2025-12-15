// Write a program in C to count the number of vowels, consonants and so on.

#include <stdio.h>
#include <conio.h>

int main()
{
    char str[20];
    int i, vowel = 0, consonants = 0;
    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin);

    // printf("%s",str);

    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
        {
            if ((str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') || (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'))
            {
                vowel++;
            }
            else
                consonants++;
        }
    }
    printf("Vowel=%d", vowel);
    printf("\nConsonants=%d", consonants);
    return 0;
}