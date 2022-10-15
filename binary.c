#include <stdio.h>
#include <math.h>

int convert(int num)
{
    int i = 0, decimal = 0;

    while (num != 0)
    {
        int digit = num % 10;
        decimal += digit * pow(2, i);

        num /= 10;
        i++;
    }
    return decimal;
}

int main()
{
    int binary;
    printf("Enter a binary number : ");
    scanf("%d", &binary);

    printf(" The decimal no is :%d", convert(binary));
    return 0;
}