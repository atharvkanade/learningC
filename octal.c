#include <stdio.h>
#include <math.h>

int convert(int num)
{
    int i = 0, decimal = 0;
    int base = 8;

    while (num != 0)
    {
        int digit = num % 10;
        decimal += digit * pow(base, i);

        num /= 10;
        i++;
    }
    return decimal;
}

int main()
{
    int octal;
    printf("Enter a octal number : ");
    scanf("%d", &octal);

    printf("Decimal number is %d", convert(octal));

    return 0;
}