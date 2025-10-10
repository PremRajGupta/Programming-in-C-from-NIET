// Write a program in C to find roots of a quadratic equation.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a, b, c, d = 0;
    printf("Enter Coefficient a,b,c=");
    scanf("%f%f%f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        float root1 = (b * b + sqrt(d)) / (2 * a);
        float root2 = (b * b - sqrt(d)) / (2 * a);
        printf("Root are Real and District");
        printf("\nRoot1=%.2f\nRoot2=%.2f", root1, root2);
    }
    else
    {
        printf("Root are Real and equal");
    }
    return 0;
}