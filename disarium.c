#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int DigiCount(int n)
{
    int ctr_digi = 0;
    int tmpx = n;
    while (tmpx)
    {
        tmpx = tmpx / 10;

        ctr_digi++;
    }
    return ctr_digi;
}
bool chkDisarum(int n)
{
    int ctr_digi = DigiCount(n);
    int s = 0;
    int x = n;
    int pr;
    while (x)
    {
        pr = x % 10;
        s = s + pow(pr, ctr_digi--);
        x = x / 10;
    }
    return (s == n);
}
int main()
{

    int i;

    printf(" The Disarium numbers are: \n");
    for (i = 1; i <= 1000; i++)
    {
        if (chkDisarum(i))
            printf("%d ", i);
    }
    printf("\n");
}
