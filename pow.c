#include <stdio.h>
#include <math.h>

int main()
{
    float base;
    printf("Enter base value :");
    scanf("%f", &base);

    float exp;
    printf("Enter exp value :");
    scanf("%f", &exp);
    // To find power
    float result;
    result = pow(base, exp);

    printf("%.1f ^ %.1f = %.2f", base, exp, result);

    return 0;
}