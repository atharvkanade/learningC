#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    printf(" The first 15 narcissistic decimal numbers are: \n");
    int i, ctr, j, orn, n, m, sum;
    orn = 1;
    for (i = 1; i <= 15;)
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
