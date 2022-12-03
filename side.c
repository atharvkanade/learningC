#include <stdio.h>
#include <stdlib.h>
#include <math.h >
int main()
{
    int s1, s2, s3, s4;

    // The triangle is right angle triangle

    printf("Enter a side1 : ");
    scanf("%d", &s1);
    printf("Enter a side2 : ");
    scanf("%d", &s2);

    s3 = ((s1 * s1) + (s2 * s2));
    s4 = sqrt((s1 * s1) + (s2 * s2));
    printf("Third side os a triangle is : %d", s4);

    return 0;
}
