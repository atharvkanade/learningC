#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float n1, n2, m;
    printf("Enter first number :");
    scanf("%f", &n1);

    printf("Enter second number :");
    scanf("%f", &n2);
    m = sqrt(n1 * n2);
    printf("The geometric mean is %f", m);

    return 0;
}