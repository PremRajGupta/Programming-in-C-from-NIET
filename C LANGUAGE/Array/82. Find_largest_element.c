// Write a program in C to find largest element in an array.
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n;
    int arr[10];

    printf("\nEnter Number of Element in Array=");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        printf("Enter [%d] Element=", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];

    for (i = 0; i <= n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("\nLargest Element=%d", max);
    return 0;
}