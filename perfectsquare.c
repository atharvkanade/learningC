#include <stdio.h>
#include <math.h>
int perfectsquare(long double x)
{
    if (x >= 0)
    {

        long long sr = sqrt(x);
        return (sr * sr == x);
    }
}

int main()
{
    int x;
    printf("Enter X :");
    scanf("%d", &x);

    if (perfectsquare(x) == 1)
        printf("True");
    else
        printf("False");
    return 0;
}
