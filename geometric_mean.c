#include <stdio.h>
#include <math.h>

int main()
{
    int count, c = 0;
    double p = 1.0;
    printf("Enter the number of values: ");
    scanf("%d", &count);

    while ((c < count))
    {
        printf("Enter a real number: ");
        double x;
        scanf("%lf", &x);
        c = c + 1;
        p = p * x;
    }

    double gm = pow(p, 1.0 / count);
    printf("The geometric mean is: %lf", gm);

    return 0;
}