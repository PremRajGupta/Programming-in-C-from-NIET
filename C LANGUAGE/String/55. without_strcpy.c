// Write a program in C to copy string without using strcpy ()
#include <stdio.h>

int main()
{
    char str1[50], str2[50];
    int i;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    printf("Original String: %s", str1);
    printf("Copied String  : %s", str2);

    return 0;
}
