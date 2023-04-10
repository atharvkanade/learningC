#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int getSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                sum = sum + i;
            else
            {
                sum = sum + i;
                sum = sum + (n / i);
            }
        }
    }
    sum = sum - n;
    return sum;
}
bool checkDeficient(int n)
{
    return (getSum(n) < n);
}
int main()
{
    int n, ctr = 0;

    for (int j = 1; j <= 100; j++)
    {
        n = j;
        if (checkDeficient(n) == true)
        {
            printf("%d ", n);
            ctr++;
        }
    }
    printf("\n The Total number of Deficient numbers are: %d \n", ctr);
}
