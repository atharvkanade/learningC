#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int nu;
    printf("Enter number ");
    scanf("%d", &nu);

    printf(" The first %d narcissistic decimal numbers are: \n", nu);
    int i, ctr, j, orn, n, m, sum;
    orn = 1;
    for (i = 1; i <= nu;)
    {
        ctr = 0;
        sum = 0;
        n = orn;
        while (n > 0)
        {
            n = n / 10;
            ctr++;
        }
        n = orn;
        while (n > 0)
        {
            m = n % 10;
            sum = sum + pow(m, ctr);
            n = n / 10;
        }
        if (sum == orn)
        {
            printf("%d ", orn);
            i++;
        }
        orn++;
    }
    printf("\n");
}
