#include <stdio.h>

int main()
{
    int a;
    printf("Enter a :");
    scanf("%d", &a);

    int b;
    printf("Enter b :");
    scanf("%d", &b);

    int gcd;

    for (int i = 1; i <= a || i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    printf("GCD of %d and %d is : %d", a, b, gcd);
}