// Write a program in C to add two number using recursion

#include <stdio.h>
#include <conio.h>
int addTwoNum(int a, int b)
{
    if (b == 0)
        return a;
    else
        return addTwoNum(a + 1, b - 1);
}

int main()
{
    int num1, num2;
    printf("Enter two Number: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum of Two Number: %d", addTwoNum(num1, num2));
}