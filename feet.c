#include <stdio.h>
int main()
{
    float meter, feet;

    printf("Enter feet : ");
    scanf("%f", &feet);

    meter = feet / 3.2808399;
    printf("meter: %f", meter);

    return 0;
}