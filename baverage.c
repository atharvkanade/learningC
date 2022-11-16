#include <stdio.h>
#include <math.h>

int main()
{
    float d, f, a;
    printf("Enter total distance (km) :");
    scanf("%f", &d);

    printf("Enter total fuel spent (litres) :");
    scanf("%f", &f);

    a = (d / f);

    printf("Average of a bike is :%f (km/lt)", a);

    return 0;
}