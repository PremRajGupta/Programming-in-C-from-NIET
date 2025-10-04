// Write a program in C to find largest number among three numbers
#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;
    printf("Enter three number=");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
        printf("%d is largest Number", a);
    else if (b > a && b > c)
        printf("%d is Largest Number", b);
    else
        printf("%d is largest Number", c);
    return 0;
}