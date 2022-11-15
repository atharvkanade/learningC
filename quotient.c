#include <stdio.h>
#include <math.h>

int main()
{
    int n, d, quo, rem;

    printf("Enter a numerator :");
    scanf("%d", &n);

    printf("Enter a numerator :");
    scanf("%d", &d);

    quo = (n / d);
    rem = (n % d);
    printf("Quotient = %d and Remainder =%d ", quo, rem);

    return 0;
}