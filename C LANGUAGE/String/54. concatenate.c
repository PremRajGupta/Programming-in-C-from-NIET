// Write a program in C to concatenate two strings
#include <stdio.h>

void concatenate(char s1[], char s2[])
{
    int i = 0, j = 0;

    while (s1[i] != '\0')
        i++;
    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
}

int main()
{
    char str1[10], str2[10];

    printf("Enter First Word: ");
    // fgets(str1, sizeof(str1), stdin);
    gets(str1);
    printf("Enter Second Word: ");
    // fgets(str2, sizeof(str2), stdin);
    gets(str2);

    concatenate(str1, str2);
    printf("Concatenated string: %s", str1);
    return 0;
}