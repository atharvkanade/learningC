#include <stdio.h>
int main()
{
    int r, a;
    printf("Enter radius of sphere :");
    scanf("%d", &r);

    a = 4 * 3.14 * r * r;

    printf("Area of sphere is : %d", a);

    return 0;
}