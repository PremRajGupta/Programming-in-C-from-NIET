// Write a program in C to find the length of a string

#include <stdio.h>
#include <conio.h>

int main()
{
    char str[20];
    int i, count = 0;

    printf("Enter String Word: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
            count++;
    }
    printf("Length of String=%d", count);
    return 0;
}