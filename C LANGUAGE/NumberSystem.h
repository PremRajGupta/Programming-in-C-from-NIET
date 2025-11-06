// #include <stdlib.h>
void DecimaltoBinary(int n)
{
    int bin[10];
    int rem, i = 0;
    while (n)
    {
        rem = n % 2;
        n /= 2;
        bin[i] = rem;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", bin[j]);
}

void BinarytoDecimal(int n)
{
    int digit, i = 0, ans = 0;
    while (n != 0)
    {
        digit = n % 10;

        if (digit == 1)
            ans = ans + pow(2, i);

        n /= 10;
        i++;
    }
    printf("Decimal Number is=%d", ans);
}