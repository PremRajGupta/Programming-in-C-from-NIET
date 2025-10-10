// Write a program in C to make a simple calculator using switch...case

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    while (1)
    {
        printf("Press 1. For Addition Two Numbers.\n");
        printf("Press 2. For Subtract Two Numbers.\n");
        printf("Press 3. For Multiple Two Numbers.\n");
        printf("Press 4. For Division Two Numbers.\n");
        printf("Press 5. For Exit\n");

        int option;
        printf("\nEnter Your Option=");
        scanf("%d", &option);
        if (option == 5)
        {
            printf("Exit Calculator");
            exit(0);
        }

        int num1, num2;
        printf("\nEnter First Number=");
        scanf("%d", &num1);
        printf("Enter Second Number=");
        scanf("%d", &num2);

        switch (option)
        {
        case 1:
            printf("Sum of Two Number is %d + %d=%d\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("Subtract of Two Number is %d - %d=%d\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("Multiple of Two Number is %d * %d=%d\n", num1, num2, num1 * num2);
            break;
        case 4:
            printf("Divide of Two Number is %d / %d=%d\n", num1, num2, num1 / num2);
            break;
        default:
            printf("Invalid Option, Please try again\n");
            break;
        };
    }
}