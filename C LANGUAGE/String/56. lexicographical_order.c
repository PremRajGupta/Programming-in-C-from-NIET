#include <stdio.h>
#include <string.h>

void copy(char src[], char src2[])
{
    int i;
    for (i = 0; src[i] != '\0'; i++)
    {
        src2[i] = src[i];
    }
    src2[i] = '\0';
}

int main()
{
    char str[10][20], temp[20];
    int n, i, j;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter string %d: ", i + 1);
        scanf("%s", str[i]);
    }

    // Sorting
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                copy(str[i], temp);
                copy(str[j], str[i]);
                copy(temp, str[j]);
            }
        }
    }

    printf("\nLexicographical Order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}
