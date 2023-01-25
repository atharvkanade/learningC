#include <stdio.h>
#include <math.h>

int reverse(int n1);

int main()
{
    int n1, rev;

    printf("Enter The Number To Reverse: ");
    scanf("%d", &n1);

    rev = reverse(n1);

    printf("The Reverse Of The Given Number Is %d = %d", n1, rev);

    return 0;
}

int reverse(int n1)
{
    int value = (int)log10(n1);

    if (n1 == 0)
        return 0;

    return ((n1 % 10 * pow(10, value)) + reverse(n1 / 10));
}