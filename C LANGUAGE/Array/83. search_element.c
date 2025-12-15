// Write a program in C to search an element from given array.
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, search;
    int arr[10];

    printf("Enter element of array=");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter [%d] Element=", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the search Number=");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == search)
            printf("Your Number is Available : %d", arr[i]);
    }
    return 0;
}