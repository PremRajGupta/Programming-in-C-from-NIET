// Write a program in C to display characters from a to z using loop
#include <stdio.h>
#include <conio.h>

int main()
{
    char ch = 'A';
    while (ch <= 'Z')
    {
        printf("%c ", ch);
        ch++;
    }
    return 0;
}