#include <stdio.h>
int main()
{
    int n1, d1, n2, d2, n3, d3;
    printf("Enter numerator of 1st number : ");
    scanf("%d", &n1);

    printf("Enter denominator of 1st number : ");
    scanf("%d", &d1);

    printf("Enter numerator of 2nd number : ");
    scanf("%d", &n2);

    printf("Enter denominator of 2nd number : ");
    scanf("%d", &d2);

    n3 = (n1 * d2) + (n2 * d1);
    d3 = (d1 * d2);

    int gcd;
    for (int i = 1; i <= n3 && i <= d3; i++)
    {
        if (n3 % i == 0 && d3 % i == 0)
        {
            gcd = i;
            printf("Sum of (%d/%d) and (%d/%d) is : (%d/%d) \n", n1, d1, n2, d2, n3 / gcd, d3 / gcd);
        }
    }
    return 0;
}