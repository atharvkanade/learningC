#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int ProDivSum(int n)
{
    int sum = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (n / i != i)
                sum += n / i;
        }
    }
    return sum;
}
bool chkAmicable(int a, int b)
{
    return (ProDivSum(a) == b && ProDivSum(b) == a);
}
int main()
{
    int n, i, j, ctr, nm1, nm2;
    printf(" Input the 1st number : ");
    scanf("%d", &nm1);
    printf(" Input the 2nd number : ");
    scanf("%d", &nm2);

    if (chkAmicable(nm1, nm2))
        printf(" The given numbers are an Amicable pair.\n");
    else
        printf(" The given numbers are not an Amicable pair.\n");
    return 0;
}
