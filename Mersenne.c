#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, p, ans, i, n1;
    double result;
    printf(" Input a number: ");
    scanf("%d", &n);
    n1 = n + 1;
    p = 0;
    ans = 0;
    for (i = 0;; i++)
    {
        p = (int)pow(2, i);
        if (p > n1)
        {
            break;
        }
        else if (p == n1)
        {
            printf(" %d is a Mersenne number.\n", n);
            ans = 1;
        }
    }
    if (ans == 0)
    {
        printf(" %d is not a Mersenne number.\n", n);
    }
    return 0;
}
