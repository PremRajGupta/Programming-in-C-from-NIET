// Write a program in C to remove all characters in a string except alphabets.

#include <stdio.h>
#include <conio.h>

void main()
{
    char str[20], result[20];
    int i = 0, j = 0;
    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';
    printf("Only Alphabet=%s", result);
}