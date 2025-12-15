// Write a program in C which will remove any given character from a string.

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j = 0;
    char str[50], ch, temp;
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter Remove Character: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ch)
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("String after removing: %s", str);
    return 0;
}