// Write a program (write a program) in C to calculate pow (x,n)

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int base, power;
    printf("Enter Base value=");
    scanf("%d", &base);
    printf("Enter Power Value=");
    scanf("%d", &power);

    int result = pow(base, power);
    printf("Power is=%d", result);
    return 0;
}