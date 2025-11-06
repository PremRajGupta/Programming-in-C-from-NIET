// Develop a calculator application that performs conversions between different number systems.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "NumberSystem.h"

int main()
{
    int num, option;
    while (1)
    {
        printf("\nPress 1. Convert Decimal to Binary");
        printf("\nPress 2. Convert Binary to Decimal");
        printf("\nPress 0. For Exit this Program");

        printf("\nChoose the Single Options: ");
        scanf("%d", &option);

        if (option == 0)
            exit(0);

        switch (option)
        {
        case 1:
            printf("Enter a Digit: ");
            scanf("%d", &num);
            DecimaltoBinary(num);
            break;

        case 2:
            printf("Enter a Binary Number: ");
            scanf("%d", &num);
            BinarytoDecimal(num);
            break;

        default:
            printf("Invalid Options, Please Choose Right Option");
            break;
        }
    }
}