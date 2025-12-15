// Write a program in C to calculate average using arrays.
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n;
    float avg = 0, sum = 0;
    int arr[10];

    printf("Enter number of element of array=");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter [%d] element=", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    printf("Average Array=%f", avg);
    return 0;
}